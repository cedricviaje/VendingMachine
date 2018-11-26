
/* This is to certify that this project is my own work, based on my personal efforts in studying and applying the concepts learned.
 * I have constructed the functions and their respective algorithms and corresponding code by myself.
 * The program was run, tested, and debugged by my own efforts.
 * I further certify that I have not copied in part or whole or otherwise plagiarized the work of other students and/or persons.
  
                                                              			Viaje, Cedric Lance A., 11544171  
 
 * This program will show the Phase 3 of Machine Project named "Lance-silog Vending Machine.
 * This program includes 3 features namely (1) Silog Vending Feature (2) Vending Maintenance Feature and (3) Shutdown feature
 * This will basically show the items in the inventory and make the user buy food from it and enables the seller to modify the item's prices and stock.
 * Programmed by: Viaje, Cedric Lance A. S20
 * Last modified:    December 1, 2016
 * Version: 3.9.1
 * Acknowledgements: Thank you for my supporters and especially to Almighty God!
 *
 */
  
#include<stdio.h>

//This function will display a line of asterisks to separate different things
void
stars()
{
	printf("*******************************************************************************\n");
}

/* This function will include the password needed
 * Precondition: Only 123456 will be accepted as the password
 * @param no parameters
 * @return returns 1 if the password is correct or 0 if incorrect
 */
int
access()
{
	int pass;
	printf("\tEnter password to proceed: ");
	scanf("%d", &pass);
	
	if(pass==123456)
		return 1; //returns 1 if pass is correct
	else
		return 0; // returns 0 if pass is incorrect
}

/* This function will show the add-ons for silog
 * Precondition: Only add-ons' stock and price are included
 * @param baconStock is the stock of bacon
 * @param tapaStock is the stock of tapa
 * @param hotdogStock is the stock of hotdog
 * @param footlongStock is the stock of footlong
 * @param nuggetsStock is the stock of nuggets
 * @param tocinoStock is the stock of tocino
 * @param eggStock is the stock of egg
 * @param riceStock is the stock of rice
 * @param baconPrice is the price of bacon
 * @param tapaPrice is the price of tapa
 * @param hotdogPrice is the price of hotdog
 * @param footlongPrice is the price of footlong
 * @param nuggetsPrice is the price of nuggets
 * @param tocinoPrice is the price of tocino
 * @param eggPrice is the price of egg
 * @param ricePrice is the price of rice
 * @return shows the list of add-ons
 */
 
void
inventory(int *baconStock, int *tapaStock, int *hotdogStock, int *footlongStock, int *nuggetsStock, int *tocinoStock, int *eggStock, int *riceStock, float *baconPrice, float *tapaPrice, float *hotdogPrice, float *footlongPrice, float *nuggetsPrice, float *tocinoPrice, float *eggPrice, float *ricePrice)
{
	printf("\tThese are the add-ons:\n\n");
	printf("\t\t 1. Bacon (Price: %.2f)\n\t  \t\tStocks left: %d\n", *baconPrice, *baconStock);
	printf("\t\t 2. Tapa (Price: %.2f)\n\t  \t\tStocks left: %d\n", *tapaPrice, *tapaStock);
	printf("\t\t 3. Hotdog (Price: %.2f)\n\t  \t\tStocks left: %d\n", *hotdogPrice, *hotdogStock);
	printf("\t\t 4. Footlong (Price: %.2f)\n\t  \t\tStocks left: %d\n", *footlongPrice, *footlongStock);
	printf("\t\t 5. Nuggets (Price: %.2f)\n\t  \t\tStocks left: %d\n", *nuggetsPrice, *nuggetsStock);
	printf("\t\t 6. Tocino (Price: %.2f)\n\t  \t\tStocks left: %d\n", *tocinoPrice, *tocinoStock);
	printf("\t\t 7. Egg (Price: %.2f)\n\t  \t\tStocks left: %d\n", *eggPrice, *eggStock);
	printf("\t\t 8. Rice (Price: %.2f)\n\t  \t\tStocks left: %d\n\n", *ricePrice, *eggStock);
		
}

/* This function will modify the price of different add-ons for silog
 * @param baconPrice is the price of bacon
 * @param tapaPrice is the price of tapa
 * @param hotdogPrice is the price of hotdog
 * @param footlongPrice is the price of footlong
 * @param nuggetsPrice is the price of nuggets
 * @param tocinoPrice is the price of tocino
 * @param eggPrice is the price of egg
 * @param ricePrice is the price of rice
 * @param baconStock is the stock of bacon
 * @param tapaStock is the stock of tapa
 * @param hotdogStock is the stock of hotdog
 * @param footlongStock is the stock of footlong
 * @param nuggetsStock is the stock of nuggets
 * @param tocinoStock is the stock of tocino
 * @param eggStock is the stock of egg
 * @param riceStock is the stock of rice
 */

void
modify(float *baconPrice, float *tapaPrice, float *hotdogPrice, float *footlongPrice, float *nuggetsPrice, float *tocinoPrice, float *eggPrice, float *ricePrice, int *baconStock, int *tapaStock, int *hotdogStock, int *footlongStock, int *nuggetsStock, int *tocinoStock, int *eggStock, int *riceStock)
{
	int	itemmodify;
	float	newprice;
	
	do{
		//selects which add-on to change price
		printf("\tChoose what add-on you want to change its price: ");
		scanf("%d", &itemmodify);
		
		if(itemmodify<1 || itemmodify>8)
			printf("\tInvalid add-on!\n");
			
	}while(itemmodify<1 || itemmodify>8); //will loop if the add-on input is invalid
	
	//Asks the new price from user
	printf("\t\tInput the new price: "); 
	scanf("%f", &newprice);
	printf("\n");
	
	if (itemmodify==1)
	{
		*baconPrice=newprice; //modifies price of bacon
		printf("\tThe new price of bacon is %.2f", *baconPrice);
	}
	else if (itemmodify==2)
	{
		*tapaPrice=newprice; //modifies price of tapa
		printf("\tThe new price of tapa is %.2f", *tapaPrice);
	}
	else if (itemmodify==3)
	{
		*hotdogPrice=newprice; //modifies price of hotdog
		printf("\tThe new price of hotdog is %.2f", *hotdogPrice);
	}
	else if (itemmodify==4)
	{
		*footlongPrice=newprice; //modifies price of footlong
		printf("\tThe new price of footlong is %.2f", *footlongPrice);
	}
	else if (itemmodify==5)
	{
		*nuggetsPrice=newprice; //modifies price of nuggets
		printf("\tThe new price of bacon is %.2f", *nuggetsPrice);
	}
	else if (itemmodify==6)
	{
		*tocinoPrice=newprice; //modifies price of tocino
		printf("\tThe new price of bacon is %.2f", *tocinoPrice);
	}
	else if (itemmodify==7)
	{
		*eggPrice=newprice; //modifies price of egg
		printf("\tThe new price of bacon is %.2f", *eggPrice);
	}
	else if (itemmodify==8)
	{
		*ricePrice=newprice; //modifies price of rice
		printf("\tThe new price of bacon is %.2f", *ricePrice);	
	}
	printf("\n");
	stars();
	if (itemmodify<1 || itemmodify>8)
					{}
				else //calls the inventory if the user modified a price
				{
					inventory(baconStock, tapaStock, hotdogStock, footlongStock, nuggetsStock, tocinoStock, eggStock, riceStock, baconPrice, tapaPrice, hotdogPrice, footlongPrice, nuggetsPrice, tocinoPrice, eggPrice, ricePrice);
				}
}

/* This function will modify the stock of different add-ons for silog
 * @param baconPrice is the price of bacon
 * @param tapaPrice is the price of tapa
 * @param hotdogPrice is the price of hotdog
 * @param footlongPrice is the price of footlong
 * @param nuggetsPrice is the price of nuggets
 * @param tocinoPrice is the price of tocino
 * @param eggPrice is the price of egg
 * @param ricePrice is the price of rice
 * @param baconStock is the stock of bacon
 * @param tapaStock is the stock of tapa
 * @param hotdogStock is the stock of hotdog
 * @param footlongStock is the stock of footlong
 * @param nuggetsStock is the stock of nuggets
 * @param tocinoStock is the stock of tocino
 * @param eggStock is the stock of egg
 * @param riceStock is the stock of rice
 */
 
void
restock(float *baconPrice, float *tapaPrice, float *hotdogPrice, float *footlongPrice, float *nuggetsPrice, float *tocinoPrice, float *eggPrice, float *ricePrice, int *baconStock, int *tapaStock, int *hotdogStock, int *footlongStock, int *nuggetsStock, int *tocinoStock, int *eggStock, int *riceStock)
{
	int itemmodify,
		newstock;
	
	do{
		//selects which add-on to change stock
		printf("\tChoose what add-on you want to change its stock: ");
		scanf("%d", &itemmodify); 
		
		if(itemmodify<1 || itemmodify>8)
			printf("\t\tInvalid add-on!\n");
			
	}while(itemmodify<1 || itemmodify>8); //will loop if the add-on input is invalid
	
	printf("\t\tInput how much stock you want to add: ");
	scanf("%d", &newstock);
	printf("\n");
	
	if (itemmodify==1)
	{
		*baconStock+=newstock; //adds stock of bacon
		printf("\tThe new stock of bacon is %d", *baconStock);
	}
	else if (itemmodify==2)
	{
		*tapaStock+=newstock; //adds stock of tapa
		printf("\tThe new stock of tapa is %d", *tapaStock);
	}
	else if (itemmodify==3)
	{
		*hotdogStock+=newstock; //adds stock of hotdog
		printf("\tThe new stock of hotdog is %d", *hotdogStock);
	}
	else if (itemmodify==4)
	{
		*footlongStock+=newstock; //adds stock of footlong
		printf("\tThe new stock of footlong is %d", *footlongStock);
	}
	else if (itemmodify==5)
	{
		*nuggetsStock+=newstock; //adds stock of nuggets
		printf("\tThe new stock of nuggets is %d", *nuggetsStock);
	}
	else if (itemmodify==6)
	{
		*tocinoStock+=newstock; //adds stock of tocino
		printf("\tThe new stock of tocino is %d", *tocinoStock);
	}
	else if (itemmodify==7)
	{
		*eggStock+=newstock; //adds stock of egg
		printf("\tThe new stock of egg is %d", *eggStock);
	}
	else if (itemmodify==8)
	{
		*riceStock+=newstock; //adds stock of rice
		printf("The new stock of rice is %d", *riceStock);	
	}
	printf("\n");
	stars();
	
	if (itemmodify<1 || itemmodify>8)
					{}
				else
				{
					//calls the inventory if one of the add-ons' stock changed
					inventory(baconStock, tapaStock, hotdogStock, footlongStock, nuggetsStock, tocinoStock, eggStock, riceStock, baconPrice, tapaPrice, hotdogPrice, footlongPrice, nuggetsPrice, tocinoPrice, eggPrice, ricePrice);
				}	
}

/* This function will show the quantity of different bills and coins in vending machine
 * @param qtwenty is the stock of twenty peso bills
 * @param qfifty is the stock of fifty peso bills
 * @param qhund is the stock of one hundred peso bills
 * @param qtwohund is the stock of two hundred peso bills
 * @param qone is the stock of one peso coins
 * @param qfive is the stock of five peso coins
 * @param qten is the stock of ten peso coins
 * @param qtwencents is the stock of twenty five centavo coins
 * @param qtencents is the stock of ten centavo coins
 */
 
void
cashreg(int *qtwenty, int *qfifty, int *qhund, int *qtwohund, int *qone, int *qfive, int *qten, int *qtwencents, int *qtencents)
{
	printf("\tThese are the bills and coins:\n");
	printf("\t\t1. 20 peso peso bills: %d piece/s\n", *qtwenty);
	printf("\t\t2. 50 peso peso bills: %d piece/s\n", *qfifty);
	printf("\t\t3. 100 peso peso bills: %d piece/s\n", *qhund);
	printf("\t\t4. 200 peso peso bills: %d piece/s\n", *qtwohund);
	printf("\t\t5. 1 peso coins: %d piece/s\n", *qone);
	printf("\t\t6. 5 peso coins: %d piece/s\n", *qfive);
	printf("\t\t7. 10 peso coins: %d piece/s\n", *qten);
	printf("\t\t8. 25 centavos: %d piece/s\n", *qtwencents);
	printf("\t\t9. 10 centavos: %d piece/s\n\n", *qtencents);	
	
}

/* This function will change the quantity of different bills and coins in vending machine
 * @param qtwenty is the stock of twenty peso bills
 * @param qfifty is the stock of fifty peso bills
 * @param qhund is the stock of one hundred peso bills
 * @param qtwohund is the stock of two hundred peso bills
 * @param qone is the stock of one peso coins
 * @param qfive is the stock of five peso coins
 * @param qten is the stock of ten peso coins
 * @param qtwencents is the stock of twenty five centavo coins
 * @param qtencents is the stock of ten centavo coins
 */
 
void
stockcashreg(int *qtwenty, int *qfifty, int *qhund, int *qtwohund, int *qone, int *qfive, int *qten, int *qtwencents, int *qtencents)
{
	int cashchangestock,
		newcstock;
	do{
	printf("\tChoose what add-on you want to change its stock: ");
	scanf("%d", &cashchangestock);
	
	if(cashchangestock<1 || cashchangestock>9)
			printf("\tInvalid selection!\n");
			
	}while(cashchangestock<1 || cashchangestock>9);
	
	printf("\tInput how much stock you want to add: ");
	scanf("%d", &newcstock);
	printf("\n");
	if (cashchangestock==1)
	{
		*qtwenty+=newcstock;
		printf("\tThe new stock of twenty peso bills is %d", *qtwenty);
	}
	else if (cashchangestock==2)
	{
		*qfifty+=newcstock;
		printf("\tThe new stock of fifty peso bills is %d", *qfifty);
	}
	else if (cashchangestock==3)
	{
		*qhund+=newcstock;
		printf("\tThe new stock of one hundred peso bills is %d", *qhund);
	}
	else if (cashchangestock==4)
	{
		*qtwohund+=newcstock;
		printf("\tThe new stock of two hundred peso bills is %d", *qtwohund);
	}
	else if (cashchangestock==5)
	{
		*qone+=newcstock;
		printf("\tThe new stock of one peso coins is %d", *qone);
	}
	else if (cashchangestock==6)
	{
		*qfive+=newcstock;
		printf("\tThe new stock of five peso coins is %d", *qfive);
	}
	else if (cashchangestock==7)
	{
		*qten+=newcstock;
		printf("\tThe new stock of ten peso coins is %d", *qten);
	}
	else if (cashchangestock==8)
	{
		*qtwencents+=newcstock;
		printf("\tThe new stock of twenty-five centavo coins is %d", *qtwencents);
	}
	else if (cashchangestock==9)
	{
		*qtencents+=newcstock;
		printf("\tThe new stock of ten centavo coins is %d", *qtencents);
	}
	else
		printf("\t\tInvalid!");
		
	printf("\n\n");
		
	if (cashchangestock<1 || cashchangestock>9)
					{}				
				else
					cashreg(qtwenty, qfifty, qhund, qtwohund, qone, qfive, qten, qtwencents, qtencents);	
}

/* This function will ask the user how many denominations of each bills and coins will he/she wants to get from the vending machine
 * @param qtwenty is the stock of twenty peso bills
 * @param qfifty is the stock of fifty peso bills
 * @param qhund is the stock of one hundred peso bills
 * @param qtwohund is the stock of two hundred peso bills
 * @param qone is the stock of one peso coins
 * @param qfive is the stock of five peso coins
 * @param qten is the stock of ten peso coins
 * @param qtwencents is the stock of twenty five centavo coins
 * @param qtencents is the stock of ten centavo coins
 */
 
void
cashout(int *qtwenty, int *qfifty, int *qhund, int *qtwohund, int *qone, int *qfive, int *qten, int *qtwencents, int *qtencents)
{
	int	cotwenty,
	    cofifty,
		cohund,
		cotwohund,
		coone,
		cofive,
		coten,
		cotwencents,
		cotencents,
		cochoice,
		dtwohund=0,
		donehund=0,
		dfifty=0,
		dtwenty=0,
		dten=0,
		dfive=0,
		done=0,
		dtwencents=0,
		dtencents=0;
		   
	float com,
		  com1,
		  com2;
	
	do{
		//Asks the user if by money or by denomination and quantity
	printf("\tWhat do you want to do?\n\t 1> Input money to claim\n\t 2> Input denomination and quantity\n\n\tChoice: ");
	scanf("%d", &cochoice);
		
		if(cochoice<1 || cochoice>2)
			printf("\tInvalid choice!\n\n");	
	}while(cochoice<1 || cochoice>2); //will loop if invalid selection
	
	if (cochoice==1)
	{
		printf("\tHow much money do you want to claim? ");
		scanf("%f", &com); //money to be claimed
		com1=com;
		//if(*qtwohund>0 && *qhund>0 && *qfifty>0 && *qtwenty>0 && *qten>0 && *qfive>0 && *qone>0 && *qtwencents>0 && *qtencents>0)
		//{
		
		//gets 200 peso bills
			while(com1>=200 && *qtwohund>0) 
			{
				com1-=200;
				*qtwohund-=1;
				dtwohund++;		
			}
			if(dtwohund>0)
			printf("\n\t\tDispensing %d two hundred peso bill/s . .\n", dtwohund);
		//gets 100 peso bills
		while(com1>=100 && *qhund>0)
			{
				com1-=100;
				*qhund-=1;
				donehund++;			
			}
			if(donehund>0)
			printf("\n\t\tDispensing %d one hundred peso bill/s . .\n", donehund);
		//gets 50 peso bills
		while(com1>=50 && *qfifty>0)
			{
				com1-=50;
				*qfifty-=1;
				dfifty++;
							
			}
			if(dfifty>0)
			printf("\n\t\tDispensing %d fifty peso bill/s . .\n", dfifty);
		//gets 20 peso bills
		while(com1>=20 && *qtwenty>0)
			{
				com1-=20;
				*qtwenty-=1;
				dtwenty++;			
			}
			if(dtwenty>0)
			printf("\n\t\tDispensing %d twenty peso bill/s . .\n", dtwenty);
		//gets 10 peso coins
		while(com1>=10 && *qten>0)
			{
				com1-=10;
				*qten-=1;
				dten++;			
			}
			if(dten>0)
			printf("\n\t\tDispensing %d ten peso coin/s . .\n", dten);
		//gets 5 peso coins
		while(com1>=5 && *qfive>0)
			{
				com1-=5;
				*qfive-=1;
				dfive++;			
			}
			if(dfive>0)
			printf("\n\t\tDispensing %d five peso coin/s . .\n", dfive);
		//gets 1 peso coins
		while(com1>=1 && *qone>0)
			{
				com1-=1;
				*qone-=1;
				done++;			
			}
			if(done>0)
			printf("\n\t\tDispensing %d one peso coin/s . .\n", done);
		//gets 25 peso centavo coins
		while(com1>=0.25 && *qtwencents>0)
			{
				com1-=0.25;
				*qtwencents-=1;
				dtwencents++;		
			}
			if(dtwencents>0)
			printf("\n\t\tDispensing %d twenty five centavo coin/s . .\n", dtwencents);
		//gets 10 peso centavo coins
		while(com1>=0.10 && *qtencents>0)
			{
				com1-=0.10;
				*qtencents-=1;
				dtencents++;			
			}
			if(dtencents>0)
			printf("\n\t\tDispensing %d ten centavo coin/s . .\n", dtencents);
			
		
		//printf("\n\n\tTotal amount dispensed is %.2f.\n\n", com);
		
		if(*qtwohund<=0 && *qhund<=0 && *qfifty<=0 && *qtwenty<=0 && *qten<=0 && *qfive<=0 && *qone<=0 && *qtwencents<=0 && *qtencents<=0)
			//if insufficient stock
			printf("\n\tUnable to dispense exact stated amount!\n");
		else
			printf("\n\n\tTotal amount dispensed is %.2f.\n\n", com);		
		//}
		//else
		//		printf("\n\tUnable to dispense exact stated amount!\n");
			
	}
	
	else if (cochoice==2)
	{
			printf("\tEnter denominations:\n\n");
			//asks how many 20 peso bills
			printf("\t\tHow many 20 peso bill do you want to claim? ");
			scanf("%d", &cotwenty);
			//asks how many 50 peso bills
			printf("\t\tHow many 50 peso bill do you want to claim? ");
			scanf("%d", &cofifty);
			//asks how many 100 peso bills
			printf("\t\tHow many 100 peso bill do you want to claim? ");
			scanf("%d", &cohund);
			//asks how many 200 peso bills
			printf("\t\tHow many 200 peso bill do you want to claim? ");
			scanf("%d", &cotwohund);
			//asks how many 1 peso coins
			printf("\t\tHow many 1 peso coin do you want to claim? ");
			scanf("%d", &coone);
			//asks how many 5 peso coins
			printf("\t\tHow many 5 peso coin do you want to claim? ");
			scanf("%d", &cofive);
			//asks how many 10 peso coins
			printf("\t\tHow many 10 peso coin do you want to claim? ");
			scanf("%d", &coten);
			//asks how many 25 peso cents
			printf("\t\tHow many 25 peso cents do you want to claim? ");
			scanf("%d", &cotwencents);
			//asks how many 10 peso cents
			printf("\t\tHow many 10 peso cents do you want to claim? ");
			scanf("%d", &cotencents);
			
			
			if(*qtwohund>0 && *qhund>0 && *qfifty>0 && *qtwenty>0 && *qten>0 && *qfive>0 && *qone>0 && *qtwencents>0 && *qtencents>0)
			{
				*qtwohund-=cotwohund;
				*qhund-=cohund;
				*qfifty-=cofifty;
				*qtwenty-=cotwenty;
				*qten-=coten;
				*qfive-=cofive;
				*qone-=coone;
				*qtwencents-=cotwencents;
				*qtencents-=cotencents;
				
				if(cotwenty>0)
					printf("\n\t\tDispensing %d twenty peso bill/s . .\n", cotwenty);
				if(cofifty>0)
					printf("\n\t\tDispensing %d fifty peso bill/s . .\n", cofifty);
				if(cohund>0)
					printf("\n\t\tDispensing %d one hundred peso bill/s . .\n", cohund);
				if(cotwohund>0)
					printf("\n\t\tDispensing %d two hundred peso bill/s . .\n", cotwohund);
				if(coone>0)
					printf("\n\t\tDispensing %d ten peso coin/s . .\n", coone);
				if(cofive>0)
					printf("\n\t\tDispensing %d five peso coin/s . .\n", cofive);
				if(coten>0)
					printf("\n\t\tDispensing %d one peso coin/s . .\n", coten);
				if(cotwencents>0)
					printf("\n\t\tDispensing %d twenty five centavo coin/s . .\n", cotwencents);
				if(cotencents>0)
					printf("\n\t\tDispensing %d ten centavo coin/s . .\n", cotencents);
				
				com2 = (cotwenty*20.00) + (cofifty*50.00) + (cohund*100.00) + (cotwohund*200.00) + (coone*1.00) + (cofive*5.00) + (coten*10.00) + (cotwencents*0.25) + (cotencents*0.10);
				printf("\n\n\tTotal amount dispensed is %.2f.\n\n", com2);
			}
			
			else
				printf("\n\tUnable to dispense exact stated amount!\n");
			
		
	}
	
	
}

/* This functions asks the user for their add-ons in their customized silog
 * @param totalMoney is the total money inserted by the user
 * @param baconPrice is the price of bacon
 * @param tapaPrice is the price of tapa
 * @param hotdogPrice is the price of hotdog
 * @param footlongPrice is the price of footlong
 * @param nuggetsPrice is the price of nuggets
 * @param tocinoPrice is the price of tocino
 * @param eggPrice is the price of egg
 * @param ricePrice is the price of rice
 * @param baconStock is the stock of bacon
 * @param tapaStock is the stock of tapa
 * @param hotdogStock is the stock of hotdog
 * @param footlongStock is the stock of footlong
 * @param nuggetsStock is the stock of nuggets
 * @param tocinoStock is the stock of tocino
 * @param eggStock is the stock of egg
 * @param riceStock is the stock of rice
 * @param userTotal is the total price of the customized silog by the user
 */
 
void
selectItems(float *totalMoney, float *baconPrice, float *tapaPrice, float *hotdogPrice, float *footlongPrice, float *nuggetsPrice, float *tocinoPrice, float *eggPrice, float *ricePrice, float *userTotal, int *baconStock, int *tapaStock, int *hotdogStock, int *footlongStock, int *nuggetsStock, int *tocinoStock, int *eggStock, int *riceStock)
{
	int addonno;
	
	*userTotal=50.00;
	
	printf("\tYour basic silog starts at 50 pesos.\n");
	//selects add-ons to add in basic silog
	printf("\tSelect which add-on you want to include in your basic silog\n\t(Input 9 if you are done)\n\n");
	for(addonno=0; addonno!=9 && (*userTotal<*totalMoney);)
	{
		printf("\tAdd-on number: ");
		scanf("%d", &addonno);
		
		if(addonno==1)
		{
			if(*baconStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*baconPrice;
				*baconStock-=1;
			}
			else
				printf("\t\tOut of stock!\n");	
		}
		else if(addonno==2)
		{
			if(*tapaStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*tapaPrice;
				*tapaStock-=1;
			}
			else
				printf("\t\tOut of stock!\n");
		}
		else if(addonno==3)
		{
			if(*hotdogStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*hotdogPrice;
				*hotdogStock-=1;
			}
			else
				printf("\t\tOut of stock!\n");
		}
		else if(addonno==4)
		{
			if(*footlongStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*footlongPrice;
				*footlongStock-=1;
			}
			else
				printf("\t\tOut of stock!\n");	
		}
		else if(addonno==5)
		{
			if(*nuggetsStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*nuggetsPrice;	
				*nuggetsStock-=1;	
			}
			else
				printf("\t\tOut of stock!\n");
		}	
		else if(addonno==6)
		{
			if(*tocinoStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*tocinoPrice;
				*tocinoStock-=1;	
			}
			else
				printf("\t\tOut of stock!\n");
		}	
		else if(addonno==7)
		{
			if(*eggStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*eggPrice;
				*eggStock-=1;
				
			}
			else
				printf("\t\tOut of stock!\n");	
		}
		else if(addonno==8)
		{
			if(*riceStock>0)
			{
				//adds to the total price
				//decreases stock
				*userTotal+=*ricePrice;
				*riceStock-=1;	
			}
			else
				printf("\t\tOut of stock!\n");
		}
		else if(addonno<1 || addonno>9)
			printf("\t\tInvalid input!\n");
	}
	printf("\n\t\tYou need to pay %0.2f for your selected order/s.", *userTotal);
	if(*userTotal>*totalMoney)
		//tells the user to cancel transaction due to lack of money inserted
		printf("\n\t\tCancel transaction to add more bills/coins.\n");
	else
		printf("\n");
	
}
/* This function asks the user to continue transaction or not
 * @param no parameters
 * @return 1 if proceed transaction and 0 if otherwise
 */
int
confirmT ()
{
	int c=1,
		x;
	
	do{
		//asks the user to continue transaction
		printf("     Do you want to proceed with the transaction? (1 for Yes and 0 for No): ");
		scanf("%d", &c);
		
		if (c==1)
			x= 1; //returns 1 if continue transaction
		
		else if (c==0)
			x= 0; // returns 0 if cancel transaction
			
		else
			printf("\tInvalid input!\n");

	}while (c!=1 && c!=0);
	return x;
	
}

/* This functions gets the change of the user
 * @param totalMoney is the money inserted by the user
 * @param userTotal is the total money the user needs to pay
 * @param qtwenty is the stock of twenty peso bills
 * @param qfifty is the stock of fifty peso bills
 * @param qhund is the stock of one hundred peso bills
 * @param qtwohund is the stock of two hundred peso bills
 * @param qone is the stock of one peso coins
 * @param qfive is the stock of five peso coins
 * @param qten is the stock of ten peso coins
 * @param qtwencents is the stock of twenty five centavo coins
 * @param qtencents is the stock of ten centavo coins
 */
void
getChange(float *totalMoney, float *userTotal, int *qtwenty, int *qfifty, int *qhund, int *qtwohund, int *qone, int *qfive, int *qten, int *qtwencents, int *qtencents)
{
	float change1,
		  change;
	int dtwohund=0,
		dhund=0,
		dfifty=0,
		dtwenty=0,
		dten=0,
		dfive=0,
		done=0,
		dtwencents=0,
		dtencents=0;
	
	//computes the change of the user
	change1= *totalMoney - *userTotal;
	change=change1;
		
	if (change!=0){
		
		//gets 200 peso bills
		while(change>=200)
			{
				
				change-=200;
				*qtwohund-=1;
				dtwohund++;		
			}
			if(dtwohund>0)
			printf("\n\t\tDispensing %d two hundred peso bill/s . .\n", dtwohund);
		//gets 100 peso bills
		while(change>=100)
			{
				change-=100;
				*qhund-=1;
				dhund++;			
			}
			if(dhund>0)
			printf("\n\t\tDispensing %d one hundred peso bill/s . .\n", dhund);
		//gets 50 peso bills
		while(change>=50)
			{
				change-=50;
				*qfifty-=1;
				dfifty++;
							
			}
			if(dfifty>0)
			printf("\n\t\tDispensing %d fifty peso bill/s . .\n", dfifty);
		//gets 20 peso bills
		while(change>=20)
			{
				change-=20;
				*qtwenty-=1;
				dtwenty++;			
			}
			if(dtwenty>0)
			printf("\n\t\tDispensing %d twenty peso bill/s . .\n", dtwenty);
		//gets 10 peso coins
		while(change>=10)
			{
				change-=10;
				*qten-=1;
				dten++;			
			}
			if(dten>0)
			printf("\n\t\tDispensing %d ten peso coin/s . .\n", dten);
		//gets 5 peso coins
		while(change>=5)
			{
				change-=5;
				*qfive-=1;
				dfive++;			
			}
			if(dfive>0)
			printf("\n\t\tDispensing %d five peso coin/s . .\n", dfive);
		//gets 1 peso coins
		while(change>=1)
			{
				change-=1;
				*qone-=1;
				done++;			
			}
			if(done>0)
			printf("\n\t\tDispensing %d one peso coin/s . .\n", done);
		//gets 25 centavo coins
		while(change>=0.25)
			{
				change-=0.25;
				*qtwencents-=1;
				dtwencents++;		
			}
			if(dtwencents>0)
			printf("\n\t\tDispensing %d twenty five centavo coin/s . .\n", dtwencents);
		//gets 10 centavo coins
		while(change>=0.10)
			{
				change-=0.10;
				*qtencents-=1;
				dtencents++;			
			}
			if(dtencents>0)
			printf("\n\t\tDispensing %d ten centavo coin/s . .\n", dtencents);
		
		
	}
	
	printf("\n\n\tYour change is %.2f.\n", change1);
	
}
/* This function will show the whole 2nd feature of Silog Vending Machine which is the Maintenance Feature
 * Precondition: Features under Vending Maintenance feature will be displayed only
 * @param baconStock is the stock of bacon
 * @param tapaStock is the stock of tapa
 * @param hotdogStock is the stock of hotdog
 * @param footlongStock is the stock of footlong
 * @param nuggetsStock is the stock of nuggets
 * @param tocinoStock is the stock of tocino
 * @param eggStock is the stock of egg
 * @param riceStock is the stock of rice
 * @param baconPrice is the price of bacon
 * @param tapaPrice is the price of tapa
 * @param hotdogPrice is the price of hotdog
 * @param footlongPrice is the price of footlong
 * @param nuggetsPrice is the price of nuggets
 * @param tocinoPrice is the price of tocino
 * @param eggPrice is the price of egg
 * @param ricePrice is the price of rice
 * @param qtwenty is the stock of twenty peso bills
 * @param qfifty is the stock of fifty peso bills
 * @param qhund is the stock of one hundred peso bills
 * @param qtwohund is the stock of two hundred peso bills
 * @param qone is the stock of one peso coins
 * @param qfive is the stock of five peso coins
 * @param qten is the stock of ten peso coins
 * @param qtwencents is the stock of twenty five centavo coins
 * @param qtencents is the stock of ten centavo coins
 */
 

void
venmain(int *baconStock, int *tapaStock, int *hotdogStock, int *footlongStock, int *nuggetsStock, int *tocinoStock, int *eggStock, int *riceStock,
		float *baconPrice, float *tapaPrice, float *hotdogPrice, float *footlongPrice, float *nuggetsPrice, float *tocinoPrice, float *eggPrice, float *ricePrice,
		int *qtwenty, int *qfifty, int *qhund, int *qtwohund, int *qone, int *qfive, int *qten, int *qtwencents, int *qtencents)
{
	int choice,
		firstchoice,
		secondchoice;
		
	//options for vending maintenance
	printf("\tI. Inventory\n\tII. Cash Register\n");	
	printf("\n\tChoose between the two: ");
	scanf("%d", &choice);
	stars();
	if (choice==1)
	{
		do{
		stars();
		//options for inventory
		printf("\tI. View Inventory\n\tII. Set/Modify Price\n\tIII. Stock/Restock Inventory\n\tIV. Return to Main Menu\n\n\tSelect feature: ");
		scanf("%d", &firstchoice);
		
			if (firstchoice==1)
			{
				stars();
				//shows inventory
				inventory(baconStock, tapaStock, hotdogStock, footlongStock, nuggetsStock, tocinoStock, eggStock, riceStock, baconPrice, tapaPrice, hotdogPrice, footlongPrice, nuggetsPrice, tocinoPrice, eggPrice, ricePrice);
				
			}
			else if (firstchoice==2)
			{
				//shows inventory and modify prices
				stars();
				inventory(baconStock, tapaStock, hotdogStock, footlongStock, nuggetsStock, tocinoStock, eggStock, riceStock, baconPrice, tapaPrice, hotdogPrice, footlongPrice, nuggetsPrice, tocinoPrice, eggPrice, ricePrice);
				modify(baconPrice, tapaPrice, hotdogPrice, footlongPrice, nuggetsPrice, tocinoPrice, eggPrice, ricePrice, baconStock, tapaStock, hotdogStock, footlongStock, nuggetsStock, tocinoStock, eggStock, riceStock);
				printf("\n");
				
			
			}
			else if (firstchoice==3)
			{
				//shows inventory and adds stock
				stars();
				inventory(baconStock, tapaStock, hotdogStock, footlongStock, nuggetsStock, tocinoStock, eggStock, riceStock, baconPrice, tapaPrice, hotdogPrice, footlongPrice, nuggetsPrice, tocinoPrice, eggPrice, ricePrice);
				restock(baconPrice, tapaPrice, hotdogPrice, footlongPrice, nuggetsPrice, tocinoPrice, eggPrice, ricePrice, baconStock, tapaStock, hotdogStock, footlongStock, nuggetsStock, tocinoStock, eggStock, riceStock);
				printf("\n");
				
			
			}
			else if(secondchoice==4)
				printf("\n");
				
			else if (firstchoice<1 || firstchoice>4)
				printf("\tInvalid!\n");	
					
		}while(firstchoice>0 && firstchoice<4);
	}
	else if(choice==2)
	{
		do{
		stars();
		//options for cash register
		printf("\tI. View Cash Register\n\tII. Stock/Restock Cash Register\n\tIII. Cash out\n\tIV. Return to Main Menu\n\n\tSelect feature: ");
		scanf("%d", &secondchoice);
		
			if (secondchoice==1)
			{
				//shows stock of bills and coins
				stars();
				cashreg(qtwenty, qfifty, qhund, qtwohund, qone, qfive, qten, qtwencents, qtencents);
				printf("\n");
				
			}
			else if(secondchoice==2)
			{
				//shows stock of bills and coins and modifies it
				stars();
				cashreg(qtwenty, qfifty, qhund, qtwohund, qone, qfive, qten, qtwencents, qtencents);
				printf("\n");
				stockcashreg(qtwenty, qfifty, qhund, qtwohund, qone, qfive, qten, qtwencents, qtencents);
				printf("\n");
				
			}
			
				
			else if(secondchoice==3)
			{
				//shows stock of bills and coins and claims money
				stars();
				cashreg(qtwenty, qfifty, qhund, qtwohund, qone, qfive, qten, qtwencents, qtencents);
				printf("\n");
				cashout(qtwenty, qfifty, qhund, qtwohund, qone, qfive, qten, qtwencents, qtencents);
				printf("\n");
				cashreg(qtwenty, qfifty, qhund, qtwohund, qone, qfive, qten, qtwencents, qtencents);
				printf("\n");
			}
			else if(secondchoice==4)
				printf("\n");
			else if (secondchoice<1 || secondchoice>4)
				printf("\tInvalid!\n");
				
		}while(secondchoice>0 && secondchoice<4);
	
	}
	else if (choice<1 || choice>2)
				printf("\tInvalid!\n\a");	

}


/* This function will question the user how much of each denomination will he/she insert in the Silog Vending Machine
 * @param twenty is the number of twenty peso bills the user will insert
 * @param fifty is the number of fifty peso bills the user will insert
 * @param hund is the number of one hundred peso bills the user will insert
 * @param twohund is the number of two hundred peso bills the user will insert
 * @param one is the number of one peso coins the user will insert
 * @param five is the number of five peso coins the user will insert
 * @param ten is the number of ten peso coins the user will insert
 * @param twencents is the number of twenty five centavo coins the user will insert
 * @param tencents is the number of ten centavo coins the user will insert
 * @param totalMoney is the total amount the user inserted
 */

void
userMoney(int twenty, int fifty, int hund, int twohund, int one, int five, int ten, int twencents, int tencents,
		  float *totalMoney)
{
	//asks denomination of user's money
	printf("\tEnter denominations:\n\n");
	printf("\t\tHow many 20 peso bill do you have? ");
	scanf("%d", &twenty);
	printf("\t\tHow many 50 peso bill do you have? ");
	scanf("%d", &fifty);
	printf("\t\tHow many 100 peso bill do you have? ");
	scanf("%d", &hund);
	printf("\t\tHow many 200 peso bill do you have? ");
	scanf("%d", &twohund);
	printf("\t\tHow many 1 peso coin do you have? ");
	scanf("%d", &one);
	printf("\t\tHow many 5 peso coin do you have? ");
	scanf("%d", &five);
	printf("\t\tHow many 10 peso coin do you have? ");
	scanf("%d", &ten);
	printf("\t\tHow many 25 peso cents do you have? ");
	scanf("%d", &twencents);
	printf("\t\tHow many 10 peso cents do you have? ");
	scanf("%d", &tencents);
	printf("\n");
	*totalMoney = (twenty*20.00) + (fifty*50.00) + (hund*100.00) + (twohund*200.00) + (one*1.00) + (five*5.00) + (ten*10.00) + (twencents*0.25) + (tencents*0.10);
	printf("\tTotal money inserted by the user is %.2f.\n", *totalMoney);
	stars();
	
	
}

int main ()
{
	
	int	featurenum,
		baconStock,
		tapaStock,
		hotdogStock,
		footlongStock,
		nuggetsStock,
		tocinoStock,
		eggStock,
		riceStock,
		qtwenty,
		qfifty,
		qhund,
		qtwohund,
		qone,
		qfive,
		qten,
		qtwencents,
		qtencents,
		twenty,
		fifty,
		hund,
		twohund,
		one,
		five,
		ten,
		twencents,
		tencents;
		
		
	float totalMoney,
		  userTotal,
		  baconPrice,
		  tapaPrice,
		  hotdogPrice,
		  footlongPrice,
		  nuggetsPrice,
		  tocinoPrice,
		  eggPrice,
		  ricePrice;
		  
		  
		  twenty=0;
		  fifty=0;
		  hund=0;
		  twohund=0;
		  one=0;
		  five=0;
		  ten=0;
		  twencents=0;
		  tencents=0;
		  totalMoney=0;
		  baconStock=0;
		  tapaStock=0;
		  hotdogStock=0;
		  footlongStock=0;
		  nuggetsStock=0;
		  tocinoStock=0;
		  eggStock=0;
		  riceStock=0;
	      baconPrice=0.00;
	      tapaPrice=0.00;
		  hotdogPrice=0.00;
		  footlongPrice=0.00;
		  nuggetsPrice=0.00;
		  tocinoPrice=0.00;
	      eggPrice=0.00;
		  ricePrice=0.00;
		  qtwenty=0;
		  qfifty=0;
		  qhund=0;
		  qtwohund=0;
		  qone=0;
		  qfive=0;
		  qten=0;
		  qtwencents=0;
		  qtencents=0;
		  
	
	
	do{
	
	stars();
	printf("\t\t\tWelcome to Lance-silog Machine!\n\n");	
	printf("\t1> Silog Vending Machine\n\t2> Maintenance Feature\n\t3> Shutdown\n\n");
	stars();
	printf("\n\tSelect feature you want to access: ");
	scanf("%d", &featurenum);
	printf("\n");
	stars();
	
	if (featurenum==1)
	{
			
		{
		//shows silog vending feature
		inventory(&baconStock, &tapaStock, &hotdogStock, &footlongStock, &nuggetsStock, &tocinoStock, &eggStock, &riceStock, &baconPrice, &tapaPrice, &hotdogPrice, &footlongPrice, &nuggetsPrice, &tocinoPrice, &eggPrice, &ricePrice);
		stars();
		userMoney(twenty, fifty, hund, twohund, one, five, ten, twencents, tencents, &totalMoney);
		stars();
		selectItems(&totalMoney, &baconPrice, &tapaPrice, &hotdogPrice, &footlongPrice, &nuggetsPrice, &tocinoPrice, &eggPrice, &ricePrice, &userTotal, &baconStock, &tapaStock, &hotdogStock, &footlongStock, &nuggetsStock, &tocinoStock, &eggStock, &riceStock);
		stars();
		
			//checks if the money of user is able to purchase the silog		
			if(confirmT()==1)
				{
					if(userTotal>totalMoney)
						printf("\t\tInsufficient funds!\n\t\tPlease add more bills/coins!\n");
						
					else if(userTotal<=totalMoney)
					{
						getChange(&totalMoney, &userTotal, &qtwenty, &qfifty, &qhund, &qtwohund, &qone, &qfive, &qten, &qtwencents, &qtencents);
						stars();
						printf("\t\tGet silog from the tray bin.\n\t\tEnjoy your meal!\n");
						
					}
				}

			else
			{
				printf("\t\tTransaction cancelled!\n");
				stars();
			}

		userTotal=0;
		
		}
	}
	
	//selects the vending maintenance feature
	else if(featurenum==2)
		{
			if (access() == 1)
				{
					stars();
					venmain(&baconStock, &tapaStock, &hotdogStock, &footlongStock, &nuggetsStock, &tocinoStock, &eggStock,  &riceStock,  &baconPrice, &tapaPrice, &hotdogPrice, &footlongPrice, &nuggetsPrice, &tocinoPrice, &eggPrice, &ricePrice, &qtwenty, &qfifty, &qhund, &qtwohund, &qone, &qfive, &qten, &qtwencents, &qtencents);
				}
			else
				printf("\n\t\tAccess denied!\n");
		}
		
	else if (featurenum<1 || featurenum>3)
		printf("\t\tInvalid feature number!\n\t\tTry again!\n");
		
	//selects to shutdown machine
	if(featurenum==3)
		{
			if (access() ==1){
			printf("\n\t\tGoing offline . . .\n");
			
			}
			
			else
			{
			printf("\n\t\tAccess denied!\n\n");
			
			}
			
		}	
	
	}while(featurenum==1 || featurenum==2 || featurenum<1 || featurenum>3);

	return 0;
}
