#include<stdio.h>
#include<conio.h>
int main()
{
	int mac;
	float rupees,paisa,result;
	int currency;
	float km,cm,m,milim,microm,nanom,mile,yard,foot,inch,nautical,dis;
	int length,lecon;
	float ton,kg,g,milig,microg,impton,stone,pound,ounce,cal;
	int weigth,wecon;
	float cum,li,ml,impgallon,impquart,imppint,impcup,impfo,imptab,imptea,cuf,cui,val;
	int volume,vocon;
	float sqkm,sqm,sqmile,sqyard,sqf,sqi,hec,ac,x;
	int area,acon;
	float y,z;
	int temp;
	
	printf("**MAKE A CONVERTER**\n\n");
	printf("\n1. CURRENCY");
	printf("\n2. LENGTH");
	printf("\n3. WEIGTH");
	printf("\n4. VOLUME");
	printf("\n5. AREA");
	printf("\n6. TEMPERETURE");
	printf("\n\nEnter The Choice:");
	scanf("%d",&mac);
	system("cls");
	switch(mac)
	{
	case 1:
			printf("***Currency Converter***\n\n");
			printf("1.Rupees Convert To Paisa");
			printf("\n2.Rupees Convert To Dollar");
			printf("\n3.Rupees Convert To Euro");
			printf("\n4.Rupees Convert To Riyal");
			printf("\n5.Rupees Convert To Dinar");
		printf("\n\nEnter Amount In Rupees:");
		scanf("%f",&rupees);
		printf("Enter Your Currency:");
		scanf("%d",&currency);
	
	 	switch(currency)
	 	{
		case 1:
		 paisa=100*rupees;
		 printf("%.f Rupees Convert To %.f Paisa",rupees,paisa);
		 break;
		case 2:
		 result=rupees/71.12;
		 printf("%.f Rupees Convert To %.f Dollar",rupees,result);
		 break;
		case 3:
		 result=rupees/81.06;
		 printf("%.f Rupees Convert To %.f Euro",rupees,result);
		 break;
		case 4:
		 result=rupees/18.96;
		 printf("%.f Rupees Convert To %.f Riyal",rupees,result);
		 break;
		case 5:
		 result=rupees/233.86;
		 printf("%.f Rupees Convert To %.f Diner",rupees,result);
		 break;
   		}
   	break;
   	case 2:
   		 	printf("***Length Converter***\n\n");
			printf("\n1. KILOMETER CONVERTER");
			printf("\n2. METER CONVERTER\0n");
			printf("\n3. CENTERMETER CONVERTER");
			printf("\n4. MILIMETER CONVERTER");
			printf("\n5. MICROMETER CONVERTER");
			printf("\n6. NANOMETER CONVERTER");
			printf("\n7. MILE CONVERTER");
			printf("\n8. YARD CONVERTER");
			printf("\n9. FOOT CONVERTER");
			printf("\n10. INCH CONVERTER");
			printf("\n11. NAUTICAL MILE CONVERTER");
		printf("\n\nEnter The Converter :");
		scanf("%d", &length);
		system("cls");
		switch(length)
		{
		case 1:
			printf("******Kilometer Converts To*******\n\n");
			
			printf("\n1. Kilometer Convert To Meter");
			printf("\n2. Kilometer Convert To Centimeter");
			printf("\n3. Kilometer Convert To Milimeter");
			printf("\n4. Kilometer Convert To Micrometer");
			printf("\n5. Kilometer Convert To Nanometer");
			printf("\n6. Kilometer Convert To Mile");
			printf("\n7. Kilometer Convert To Yard");
			printf("\n8. Kilometer Convert To Foot");
			printf("\n9. Kilometer Convert To Inch");
			printf("\n10.Kilometer Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f",&dis);
		printf("\nKilometer Convert To:");
		scanf("%d",&lecon);
		switch(lecon)
		{
		case 1:	
		 km=(dis*1000);	
		 printf("%.f Kilometer Convert To %.f Meter",dis,km);
		 break;
		case 2:
		 km=(dis*100000);	
		 printf("%.f Kilometer Convert To %.f Centimeter",dis,km);
		 break;
		case 3:
		 km=(dis*1e+6);	
		 printf("%.f Kilometer Convert To %.f Milimeter",dis,km);
		 break;
		case 4:
		 km=(dis*1e+9);	
		 printf("%.f Kilometer Convert To %.f Micrometer",dis,km);
		 break;
		case 5:
		 km=(dis*1e+12);		
		 printf("%.f Kilometer Convert To %.f Nanometer",dis,km);
		 break;
		case 6:
		 km=(dis/1.609);		
		 printf("%.f Kilometer Convert To %.f Mile",dis,km);
		 break;
		case 7:
		 km=(dis*1093.613);		
		 printf("%.f Kilometer Convert To %.f Yard",dis,km);
		 break;	
		case 8:
		 km=(dis*3280.84);		
		 printf("%.f Kilometer Convert To %.f Foot",dis,km);
		 break;	
		case 9:
		 km=(dis*39370.079);		
		 printf("%.f Kilometer Convert To %.f Inch",dis,km);
		 break;	
		case 10:
		 km=(dis/1.852);		
		 printf("%.f Kilometer Convert To %.f Nautical Mile",dis,km);
		 break;
		}		
		break;

		case 2:
			printf("*******Meter Converts To*******\n\n");
			
			printf("\n1. Meter Convert To Kilometer");
			printf("\n2. Meter Convert To Centimeter");
			printf("\n3. Meter Convert To Milimeter");
			printf("\n4. Meter Convert To Micrometer");
			printf("\n5. Meter Convert To Nanometer");
			printf("\n6. Meter Convert To Mile");
			printf("\n7. Meter Convert To Yard");
			printf("\n8. Meter Convert To Foot");
			printf("\n9. Meter Convert To Inch");
			printf("\n10. Meter Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nMiter Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{			
		case 1:
		 m=(dis/1000);		
		 printf("%.f Meter Convert To %.f Kilometer",dis,m);
		 break;	
		case 2:
		 m=(dis*100);		
		 printf("%.f Meter Convert To %.f Centimeter",dis,m);
		 break;	
		case 3:
		 m=(dis*1000);		
		 printf("%.f Meter Convert To %.f Milimeter",dis,m);
		 break;	
		case 4:
		 m=(dis*1e+6);		
		 printf("%.f Meter Convert To %.f Micrometer",dis,m);
		 break;	
		case 5:
		 m=(dis*1e+9);		
		 printf("%.f Meter Convert To %.f Nanometer",dis,m);
		 break;	
		case 6:
		 m=(dis/1609.344);		
		 printf("%.f Meter Convert To %.f Mile",dis,m);
		 break;
		case 7:
		 m=(dis*1.094);		
		 printf("%.f Meter Convert To %.f Yard",dis,m);
		 break;	
		case 8:
		 m=(dis*3.281);		
		 printf("%.f Meter Convert To %.f Foot",dis,m);
		 break;	
		case 9:
		 m=(dis*39.37);		
		 printf("%.f Meter Convert To %.f Inch",dis,m);
		 break;	
		case 10:
		 m=(dis/1852);		
		 printf("%.f Meter Convert To %.f Nautical Mile",dis,m);
		break;
		}
		break;
		
		case 3:
			printf("******Centimeter Convertes To******\n\n");
			
			printf("\n1. Centimeter Convert To Kilometer");
			printf("\n2. Centimeter Convert To Meter");
			printf("\n3. Centimeter Convert To Milimeter");
			printf("\n4. Centimeter Convert To Micrometer");
			printf("\n5. Centimeter Convert To Nanometer");
			printf("\n6. Centimeter Convert To Mile");
			printf("\n7. Centimeter Convert To Yard");
			printf("\n8. Centimeter Convert To Foot");
			printf("\n9. Centimeter Convert To Inch");
			printf("\n10. Centimeter Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nCentimeter Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 cm=(dis/100000);		
		 printf("%.f Centimeter Convert To %.f Kilometer",dis,cm);
		 break;	
		case 2:
		 cm=(dis/100);		
		 printf("%.f Centimeter Convert To %.f Meter",dis,cm);
		 break;	
		case 3:
		 cm=(dis*10);		
		 printf("%.f Centimeter Convert To %.f Milimeter",dis,cm);
		 break;	
		case 4:
		 cm=(dis*10000);		
		 printf("%.f Centimeter Convert To %.f Micrometer",dis,cm);
		 break;	
		case 5:
		 cm=(dis*1e+7);		
		 printf("%.f Centimeter Convert To %.f Nanometer",dis,cm);
		 break;	
		case 6:
		 cm=(dis/160934.4);		
		 printf("%.f Centimeter Convert To %.f Mile",dis,cm);
		 break;
		case 7:
		 cm=(dis/91.44);		
		 printf("%.f Centimeter Convert To %.f Yard",dis,cm);
		 break;	
		case 8:
		 cm=(dis/30.48);		
		 printf("%.f Centimeter Convert To %.f Foot",dis,cm);
		 break;	
		case 9:
		 cm=(dis/2.54);		
		 printf("%.f Centimeter Convert To %.f Inch",dis,cm);
		 break;	
		case 10:
		 cm=(dis/185200);		
		 printf("%.f Centimeter Convert To %.f Nautical Mile",dis,cm);
		 break;	    	          	 	
		}
		break;
		
		case 4:
			printf("******Milimeter Converts To******\n\n");
			
			printf("\n1. Milimeter Convert To Kilometer");
			printf("\n2. Milimeter Convert To Meter");
			printf("\n3. Milimeter Convert To Centimeter");
			printf("\n4. Milimeter Convert To Micrometer");
			printf("\n5. Milimeter Convert To Nanometer");
			printf("\n6. Milimeter Convert To Mile");
			printf("\n7. Milimeter Convert To Yard");
			printf("\n8. Milimeter Convert To Foot");
			printf("\n9. Milimeter Convert To Inch");
			printf("\n10. Milimeter Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nMilimeter Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 milim=(dis/1e+6);		
		 printf("%.f Milimeter Convert To %.f Kilometer",dis,milim);
		 break;	
		case 2:
		 milim=(dis/1000);		
		 printf("%.f Milimeter Convert To %.f Meter",dis,milim);
		 break;	
		case 3:
		 milim=(dis/10);		
		 printf("%.f Milimeter Convert To %.f Centimeter",dis,milim);
		 break;	
		case 4:
		 milim=(dis*1000);		
		 printf("%.f Milimeter Convert To %.f Micrometer",dis,milim);
		 break;	
		case 5:
		 milim=(dis*1e+6);		
		 printf("%.f Milimeter Convert To %.f Nanometer",dis,milim);
		 break;	
		case 6:
		 milim=(dis/1.609e+6);		
		 printf("%.f Milimeter Convert To %.f Mile",dis,milim);
		 break;
		case 7:
		 milim=(dis/914.4);		
		 printf("%.f Milimeter Convert To %.f Yard",dis,milim);
		 break;	
		case 8:
		 milim=(dis/914.4);		
		 printf("%.f Milimeter Convert To %.f Foot",dis,milim);
		 break;	
		case 9:
		 milim=(dis/25.4);		
		 printf("%.f Milimeter Convert To %.f Inch",dis,milim);
		 break;	
		case 10:
		 milim=(dis/1.852e+6);		
		 printf("%.f Milimeter Convert To %.f Nautical Mile",dis,milim);
		 break;	    	          	 	
		}
		break;
		
		case 5:
			printf("******Micrometer Converts To******\n\n");
			
			printf("\n1. Micrometer Convert To Kilometer");
			printf("\n2. Micrometer Convert To Meter");
			printf("\n3. Micrometer Convert To Centimeter");
			printf("\n4. Micrometer Convert To Milimeter");
			printf("\n5. Micrometer Convert To Nanometer");
			printf("\n6. Micrometer Convert To Mile");
			printf("\n7. Micrometer Convert To Yard");
			printf("\n8. Micrometer Convert To Foot");
			printf("\n9. Micrometer Convert To Inch");
			printf("\n10. Micrometer Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nMicrometer Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 microm=(dis/1e+9);		
		 printf("%.f Micrometer Convert To %.f Kilometer",dis,microm);
		 break;	
		case 2:
		 microm=(dis/1e+6);		
		 printf("%.f Micrometer Convert To %.f Meter",dis,microm);
		 break;	
		case 3:
		 microm=(dis/10000);		
		 printf("%.f Micrometer Convert To %.f Centimeter",dis,microm);
		 break;	
		case 4:
		 microm=(dis/1000);		
		 printf("%.f Micrometer Convert To %.f Milimeter",dis,microm);
		 break;	
		case 5:
		 microm=(dis*1000);		
		 printf("%.f Micrometer Convert To %.f Nanometer",dis,microm);
		 break;	
		case 6:
		 microm=(dis/1.609e+9);		
		 printf("%.f Micrometer Convert To %.f Mile",dis,microm);
		 break;
		case 7:
		 microm=(dis/914400);		
		 printf("%.f Micrometer Convert To %.f Yard",dis,microm);
		 break;	
		case 8:
		 microm=(dis/304800);		
		 printf("%.f Micrometer Convert To %.f Foot",dis,microm);
		 break;	
		case 9:
		 microm=(dis/25400);		
		 printf("%.f Micrometer Convert To %.f Inch",dis,microm);
		 break;	
		case 10:
		 microm=(dis/1.852e+9);		
		 printf("%.f Micrometer Convert To %.f Nautical Mile",dis,microm);
		 break;	    	          	 	
		}
		break;
		
		case 6:
			printf("******Nanometer Converts To******\n\n");
			
			printf("\n1. Nanometer Convert To Kilometer");
			printf("\n2. Nanometer Convert To Meter");
			printf("\n3. Nanometer Convert To Centimeter");
			printf("\n4. Nanometer Convert To Milimeter");
			printf("\n5. Nanometer Convert To Micrometer");
			printf("\n6. Nanometer Convert To Mile");
			printf("\n7. Nanometer Convert To Yard");
			printf("\n8. Nanometer Convert To Foot");
			printf("\n9. Nanometer Convert To Inch");
			printf("\n10. Nanometer Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nNanometer Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 nanom=(dis/1e+12);		
		 printf("%.f Nanometer Convert To %.f Kilometer",dis,nanom);
		 break;	
		case 2:
		 nanom=(dis/1e+9);		
		 printf("%.f Nanometer Convert To %.f Meter",dis,nanom);
		 break;	
		case 3:
		 nanom=(dis/1e+7);		
		 printf("%.f Nanometer Convert To %.f Centimeter",dis,nanom);
		 break;	
		case 4:
		 nanom=(dis/1e+6);		
		 printf("%.f Nanometer Convert To %.f Milimeter",dis,nanom);
		 break;	
		case 5:
		 nanom=(dis/1000);		
		 printf("%.f Nanometer Convert To %.f Micrometer",dis,nanom);
		 break;	
		case 6:
		 nanom=(dis/1.609e+12);		
		 printf("%.f Nanometer Convert To %.f Mile",dis,nanom);
		 break;
		case 7:
		 nanom=(dis/9.144e+8);		
		 printf("%.f Nanometer Convert To %.f Yard",dis,nanom);
		 break;	
		case 8:
		 nanom=(dis/3.048e+8);		
		 printf("%.f Nanometer Convert To %.f Foot",dis,nanom);
		 break;	
		case 9:
		 nanom=(dis/2.54e+7);		
		 printf("%.f Nanometer Convert To %.f Inch",dis,nanom);
		 break;	
		case 10:
		 nanom=(dis/1.852e+12);		
		 printf("%.f Nanometer Convert To %.f Nautical Mile",dis,nanom);
		 break;	    	          	 	
		}
		break;
		
		case 7:
			printf("******Mile Converts To******\n\n");
			
			printf("\n1. Mile Convert To Kilometer");
			printf("\n2. Mile Convert To Meter");
			printf("\n3. Mile Convert To Centimeter");
			printf("\n4. Mile Convert To Milimeter");
			printf("\n5. Mile Convert To Micrometer");
			printf("\n6. Mile Convert To Nanometer");
			printf("\n7. Mile Convert To Yard");
			printf("\n8. Mile Convert To Foot");
			printf("\n9. Mile Convert To Inch");
			printf("\n10. Mile Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nMile Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 mile=(dis*1.609);		
		 printf("%.f Mile Convert To %.f Kilometer",dis,mile);
		 break;	
		case 2:
		 mile=(dis*1609.344);		
		 printf("%.f Mile Convert To %.f Meter",dis,mile);
		 break;	
		case 3:
		 mile=(dis*160934.4);		
		 printf("%.f Mile Convert To %.f Centimeter",dis,mile);
		 break;	
		case 4:
		 mile=(dis*1.609e+6);		
		 printf("%.f Mile Convert To %.f Milimeter",dis,mile);
		 break;	
		case 5:
		 mile=(dis*1.609e+9);		
		 printf("%.f Mile Convert To %.f Micrometer",dis,mile);
		 break;	
		case 6:
		 mile=(dis*1.609e+12);		
		 printf("%.f Mile Convert To %.f Nanometer",dis,mile);
		 break;
		case 7:
		 mile=(dis*1760);		
		 printf("%.f Mile Convert To %.f Yard",dis,mile);
		 break;	
		case 8:
		 mile=(dis*1000);		
		 printf("%.f Mile Convert To %.f Foot",dis,mile);
		 break;	
		case 9:
		 mile=(dis*63360);		
		 printf("%.f Mile Convert To %.f Inch",dis,mile);
		 break;	
		case 10:
		 mile=(dis/1.151);		
		 printf("%.f Mile Convert To %.f Nautical Mile",dis,mile);
		 break;	    	          	 	
		}
		break;
		
		case 8:
			printf("******Yard Converts To******\n\n");
			
			printf("\n1. Yard Convert To Kilometer");
			printf("\n2. Yard Convert To Meter");
			printf("\n3. Yard Convert To Centimeter");
			printf("\n4. Yard Convert To Milimeter");
			printf("\n5. Yard Convert To Micrometer");
			printf("\n6. Yard Convert To Nanometer");
			printf("\n7. Yard Convert To Mile");
			printf("\n8. Yard Convert To Foot");
			printf("\n9. Yard Convert To Inch");
			printf("\n10. Yard Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nYard Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 yard=(dis/1093.613);		
		 printf("%.f Yard Convert To %.f Kilometer",dis,yard);
		 break;	
		case 2:
		 yard=(dis/1.094);		
		 printf("%.f Yard Convert To %.f Meter",dis,yard);
		 break;	
		case 3:
		 yard=(dis*91.44);		
		 printf("%.f Yard Convert To %.f Centimeter",dis,yard);
		 break;	
		case 4:
		 yard=(dis*914.4);		
		 printf("%.f Yard Convert To %.f Milimeter",dis,yard);
		 break;	
		case 5:
		 yard=(dis*914400);		
		 printf("%.f Yard Convert To %.f Micrometer",dis,yard);
		 break;	
		case 6:
		 yard=(dis*9.144e+8);		
		 printf("%.f Yard Convert To %.f Nanometer",dis,yard);
		 break;
		case 7:
		 yard=(dis/1760);		
		 printf("%.f Yard Convert To %.f Mile",dis,yard);
		 break;	
		case 8:
		 yard=(dis*3);		
		 printf("%.f Yard Convert To %.f Foot",dis,yard);
		 break;	
		case 9:
		 yard=(dis*36);		
		 printf("%.f Yard Convert To %.f Inch",dis,yard);
		 break;	
		case 10:
		 yard=(dis/2025.372);		
		 printf("%.f Yard Convert To %.f Nautical Mile",dis,yard);
		 break;	    	          	 	
		}
		break;
		
		case 9:
			printf("******Foot Converts To******\n\n");
			
			printf("\n1. Foot Convert To Kilometer");
			printf("\n2. Foot Convert To Meter");
			printf("\n3. Foot Convert To Centimeter");
			printf("\n4. Foot Convert To Milimeter");
			printf("\n5. Foot Convert To Micrometer");
			printf("\n6. Foot Convert To Nanometer");
			printf("\n7. Foot Convert To Mile");
			printf("\n8. Foot Convert To Yard");
			printf("\n9. Foot Convert To Inch");
			printf("\n10. Foot Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nFoot Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 foot=(dis/3280.84);		
		 printf("%.f Foot Convert To %.f Kilometer",dis,foot);
		 break;	
		case 2:
		 foot=(dis/3.281);		
		 printf("%.f Foot Convert To %.f Meter",dis,foot);
		 break;	
		case 3:
		 foot=(dis*30.48);		
		 printf("%.f Foot Convert To %.f Centimeter",dis,foot);
		 break;	
		case 4:
		 foot=(dis*304.8);		
		 printf("%.f Foot Convert To %.f Milimeter",dis,foot);
		 break;	
		case 5:
		 foot=(dis*304800);		
		 printf("%.f Foot Convert To %.f Micrometer",dis,foot);
		 break;	
		case 6:
		 foot=(dis*3.048e+8);		
		 printf("%.f Foot Convert To %.f Nanometer",dis,foot);
		 break;
		case 7:
		 foot=(dis/5280);		
		 printf("%.f Foot Convert To %.f Mile",dis,foot);
		 break;	
		case 8:
		 foot=(dis/3);		
		 printf("%.f Foot Convert To %.f Yard",dis,foot);
		 break;	
		case 9:
		 foot=(dis*12);		
		 printf("%.f Foot Convert To %.f Inch",dis,foot);
		 break;	
		case 10:
		 foot=(dis/6076.115);		
		 printf("%.f Foot Convert To %.f Nautical Mile",dis,foot);
		 break;	    	          	 	
		}
		break;
		
		case 10:
			printf("******Inch Converts To******\n\n");
			
			printf("\n1. Inch Convert To Kilometer");
			printf("\n2. Inch Convert To Meter");
			printf("\n3. Inch Convert To Centimeter");
			printf("\n4. Inch Convert To Milimeter");
			printf("\n5. Inch Convert To Micrometer");
			printf("\n6. Inch Convert To Nanometer");
			printf("\n7. Inch Convert To Mile");
			printf("\n8. Inch Convert To Yard");
			printf("\n9. Inch Convert To Foot");
			printf("\n10. Inch Convert To Nautical Mile");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nInch Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 inch=(dis/39370.079);		
		 printf("%.f Inch Convert To %.f Kilometer",dis,inch);
		 break;	
		case 2:
		 inch=(dis/39.37);		
		 printf("%.f Inch Convert To %.f Meter",dis,inch);
		 break;	
		case 3:
		 inch=(dis*2.54);		
		 printf("%.f Inch Convert To %.f Centimeter",dis,inch);
		 break;	
		case 4:
		 inch=(dis*25.4);		
		 printf("%.f Inch Convert To %.f Milimeter",dis,inch);
		 break;	
		case 5:
		 inch=(dis*25400);		
		 printf("%.f Inch Convert To %.f Micrometer",dis,inch);
		 break;	
		case 6:
		 inch=(dis*2.54e+7);		
		 printf("%.f Inch Convert To %.f Nanometer",dis,inch);
		 break;
		case 7:
		 inch=(dis/63360);		
		 printf("%.f Inch Convert To %.f Mile",dis,inch);
		 break;	
		case 8:
		 inch=(dis/36);		
		 printf("%.f Inch Convert To %.f Yard",dis,inch);
		 break;	
		case 9:
		 inch=(dis/12);		
		 printf("%.f Inch Convert To %.f Foot",dis,inch);
		 break;	
		case 10:
		 inch=(dis/72913.386);		
		 printf("%.f Inch Convert To %.f Nautical Mile",dis,inch);
		 break;	    	          	 	
		}
		break;
		
		case 11:
			printf("******Nautical Mile******\n\n");
			
			printf("\n1. Nautical Mile Convert To Kilometer");
			printf("\n2. Nautical Mile Convert To Meter");
			printf("\n3. Nautical Mile Convert To Centimeter");
			printf("\n4. Nautical Mile Convert To Milimeter");
			printf("\n5. Nautical Mile Convert To Micrometer");
			printf("\n6. Nautical Mile Convert To Nanometer");
			printf("\n7. Nautical Mile Convert To Mile");
			printf("\n8. Nautical Mile Convert To Yard");
			printf("\n9. Nautical Mile Convert To Foot");
			printf("\n10. Nautical Mile Convert To Inch");
		printf("\n\nEnter the Value:");
		scanf("%f", &dis);
		printf("\nNautical Mile Convert To:");
		scanf("%d", &lecon);
		switch(lecon)
		{
		case 1:
		 nautical=(dis*1.852);		
		 printf("%.f Nautical Mile Convert To %.f Kilometer",dis,nautical);
		 break;	
		case 2:
		 nautical=(dis*1852);		
		 printf("%.f Nautical Mile Convert To %.f Meter",dis,nautical);
		 break;	
		case 3:
		 nautical=(dis*185200);		
		 printf("%.f Nautical Mile Convert To %.f Centimeter",dis,nautical);
		 break;	
		case 4:
		 nautical=(dis*1.852e+6);		
		 printf("%.f Nautical Mile Convert To %.f Milimeter",dis,nautical);
		 break;	
		case 5:
		 nautical=(dis*1.852e+9);		
		 printf("%.f Nautical Mile Convert To %.f Micrometer",dis,nautical);
		 break;	
		case 6:
		 nautical=(dis*1.852e+12);		
		 printf("%.f Nautical Mile Convert To %.f Nanometer",dis,nautical);
		 break;
		case 7:
		 nautical=(dis*1.151);		
		 printf("%.f Nautical Mile Convert To %.f Mile",dis,nautical);
		 break;	
		case 8:
		 nautical=(dis*2025.372);		
		 printf("%.f Nautical Mile Convert To %.f Yard",dis,nautical);
		 break;	
		case 9:
		 nautical=(dis*6076.115);		
		 printf("%.f Nautical Mile Convert To %.f Foot",dis,nautical);
		 break;	
		case 10:
		 nautical=(dis*72913.386);		
		 printf("%.f Nautical Mile Convert To %.f Inch",dis,nautical);
		 break;	    	          	 	
		}
		break;
	}
	break;
	case 3:
			printf("***Weigth Converter***\n\n");
			printf("\n1. TONNE CONVERTER");
			printf("\n2. KILOGRAM CONVERTER");
			printf("\n3. GRAM CONVERTER");
			printf("\n4. MILIGRAM CONVERTER");
			printf("\n5. MICROGRAM CONVERTER");
			printf("\n6. IMPERIAL TON CONVERTER");
			printf("\n7. STONE CONVERTER");
			printf("\n8. POUND CONVERTER");
			printf("\n9. OUNCE CONVERTER");
		printf("\n\nEnter The Weigth:");
		scanf("%d",&weigth);
		system("cls");
		switch(weigth)
		{
		case 1:
			printf("******Tonne Convert To******\n\n");
			
			printf("\n1. Tonne Convert To Kilogram");
			printf("\n2. Tonne Convert To Gram");
			printf("\n3. Tonne Convert To Miligram");
			printf("\n4. Tonne Convert To Microgram");
			printf("\n5. Tonne Convert To Imperial Ton");
			printf("\n6. Tonne Convert To Stone");
			printf("\n7. Tonne Convert To Pound");
			printf("\n8. Tonne Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nTonne Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				ton=cal*1000;
				printf("%.f Tonne Convert To %.f Kilogram",cal,ton);
			break;
			case 2:
				ton=cal*1e+6;
				printf("%.f Tonne Convert To %.f Gram",cal,ton);
			break;
			case 3:
				ton=cal*1e+9;
				printf("%.f Tonne Convert To %.f Miligram",cal,ton);
			break;
			case 4:
				ton=cal*1e+12;
				printf("%.f Tonne Convert To %.f Microgram",cal,ton);
			break;
			case 5:
				ton=cal/1.016;
				printf("%.f Tonne Convert To %.f Imperial Ton",cal,ton);
			break;
			case 6:
				ton=cal*157.473;
				printf("%.f Tonne Convert To %.f Stone",cal,ton);
			break;
			case 7:
				ton=cal*2204.623;
				printf("%.f Tonne Convert To %.f Pound",cal,ton);
			break;
			case 8:
				ton=cal*35273.962;
				printf("%.f Tonne Convert To %.f Ounce",cal,ton);
			break;								
		}
		break;
		
		case 2:
			printf("******Kilogram Convert To******\n\n");
			
			printf("\n1. Kilogram Convert To Tonne");
			printf("\n2. Kilogram Convert To Gram");
			printf("\n3. Kilogram Convert To Miligram");
			printf("\n4. Kilogram Convert To Microgram");
			printf("\n5. Kilogram Convert To Imperial Ton");
			printf("\n6. Kilogram Convert To Stone");
			printf("\n7. Kilogram Convert To Pound");
			printf("\n8. Kilogram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nKilogram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				kg=cal/1000;
				printf("%.f Kilogram Convert To %.f Tonne",cal,kg);
			break;
			case 2:
				kg=cal*1000;
				printf("%.f Kilogram Convert To %.f Gram",cal,kg);
			break;
			case 3:
				kg=cal*1e+6;
				printf("%.f Kilogram Convert To %.f Miligram",cal,kg);
			break;
			case 4:
				kg=cal*1e+9;
				printf("%.f Kilogram Convert To %.f Microgram",cal,kg);
			break;
			case 5:
				kg=cal/1016.047;
				printf("%.f Kilogram Convert To %.f Imperial Ton",cal,kg);
			break;
			case 6:
				kg=cal/6.35;
				printf("%.f Kilogram Convert To %.f Stone",cal,kg);
			break;
			case 7:
				kg=cal*2.205;
				printf("%.f Kilogram Convert To %.f Pound",cal,kg);
			break;
			case 8:
				kg=cal*35.274;
				printf("%.f Kilogram Convert To %.f Ounce",cal,kg);
			break;								
		}
		break;
		
		case 3:
			printf("******Gram Convert To******\n\n");
			
			printf("\n1. Gram Convert To Tonne");
			printf("\n2. Gram Convert To kilogram");
			printf("\n3. Gram Convert To Miligram");
			printf("\n4. Gram Convert To Microgram");
			printf("\n5. Gram Convert To Imperial Ton");
			printf("\n6. Gram Convert To Stone");
			printf("\n7. Gram Convert To Pound");
			printf("\n8. Gram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nGram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				g=cal/1e+6;
				printf("%.f Gram Convert To %.f Tonne",cal,g);
			break;
			case 2:
				g=cal/1000;
				printf("%.f Gram Convert To %.f Kilogram",cal,g);
			break;
			case 3:
				g=cal*1000;
				printf("%.f Gram Convert To %.f Miligram",cal,g);
			break;
			case 4:
				g=cal*1e+6;
				printf("%.f Gram Convert To %.f Microgram",cal,g);
			break;
			case 5:
				g=cal/1.016e+6;
				printf("%.f Gram Convert To %.f Imperial Ton",cal,g);
			break;
			case 6:
				g=cal/6350.293;
				printf("%.f Gram Convert To %.f Stone",cal,g);
			break;
			case 7:
				g=cal/453.592;
				printf("%.f Gram Convert To %.f Pound",cal,g);
			break;
			case 8:
				g=cal/28.35;
				printf("%.f Gram Convert To %.f Ounce",cal,g);
			break;								
		}
		break;
		
		case 4:
			printf("******Miligram Convert To******\n\n");
			
			printf("\n1. Miligram Convert To Tonne");
			printf("\n2. Miligram Convert To kilogram");
			printf("\n3. Miligram Convert To Gram");
			printf("\n4. Miligram Convert To Microgram");
			printf("\n5. Miligram Convert To Imperial Ton");
			printf("\n6. Miligram Convert To Stone");
			printf("\n7. Miligram Convert To Pound");
			printf("\n8. Miligram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nMiligram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				milig=cal/1e+9;
				printf("%.f Miligram Convert To %.f Tonne",cal,milig);
			break;
			case 2:
				milig=cal/1e+6;
				printf("%.f Miligram Convert To %.f Kilogram",cal,milig);
			break;
			case 3:
				milig=cal/1000;
				printf("%.f Miligram Convert To %.f Gram",cal,milig);
			break;
			case 4:
				milig=cal*1000;
				printf("%.f Miligram Convert To %.f Microgram",cal,milig);
			break;
			case 5:
				milig=cal/1.016e+9;
				printf("%.f Miligram Convert To %.f Imperial Ton",cal,milig);
			break;
			case 6:
				milig=cal/6.35e+6;
				printf("%.f Miligram Convert To %.f Stone",cal,milig);
			break;
			case 7:
				milig=cal/453592.37;
				printf("%.f Miligram Convert To %.f Pound",cal,milig);
			break;
			case 8:
				milig=cal/28349.523;
				printf("%.f Miligram Convert To %.f Ounce",cal,milig);
			break;								
		}
		break;
		
		case 5:
			printf("******Microgram Convert To******\n\n");
			
			printf("\n1. Microgram Convert To Tonne");
			printf("\n2. Microgram Convert To kilogram");
			printf("\n3. Microgram Convert To Gram");
			printf("\n4. Microgram Convert To Miligram");
			printf("\n5. Microgram Convert To Imperial Ton");
			printf("\n6. Microgram Convert To Stone");
			printf("\n7. Microgram Convert To Pound");
			printf("\n8. Microgram Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nMicrogram Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				microg=cal/1e+12;
				printf("%.f Microgram Convert To %.f Tonne",cal,microg);
			break;
			case 2:
				microg=cal/1e+9;
				printf("%.f Microgram Convert To %.f Kilogram",cal,microg);
			break;
			case 3:
				microg=cal/1e+6;
				printf("%.f Microgram Convert To %.f Gram",cal,microg);
			break;
			case 4:
				microg=cal/1000;
				printf("%.f Microgram Convert To %.f Miligram",cal,microg);
			break;
			case 5:
				microg=cal/1.016e+12;
				printf("%.f Microgram Convert To %.f Imperial Ton",cal,microg);
			break;
			case 6:
				microg=cal/6.35e+9;
				printf("%.f Microgram Convert To %.f Stone",cal,microg);
			break;
			case 7:
				microg=cal/4.536e+8;
				printf("%.f Microgram Convert To %.f Pound",cal,microg);
			break;
			case 8:
				microg=cal/2.835e+7;
				printf("%.f Microgram Convert To %.f Ounce",cal,microg);
			break;								
		}
		break;
		
		case 6:
			printf("******Imperial Ton To******\n\n");
			
			printf("\n1. Imperial Ton Convert To Tonne");
			printf("\n2. Imperial Ton Convert To kilogram");
			printf("\n3. Imperial Ton Convert To Gram");
			printf("\n4. Imperial Ton Convert To Miligram");
			printf("\n5. Imperial Ton Convert To Microgram");
			printf("\n6. Imperial Ton Convert To Stone");
			printf("\n7. Imperial Ton Convert To Pound");
			printf("\n8. Imperial Ton Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nImperial Ton Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				impton=cal*1.016;
				printf("%.f Imperial Ton Convert To %.f Tonne",cal,impton);
			break;
			case 2:
				impton=cal*1016.047;
				printf("%.f Imperial Ton Convert To %.f Kilogram",cal,impton);
			break;
			case 3:
				impton=cal*1.016e+6;
				printf("%.f Imperial Ton Convert To %.f Gram",cal,impton);
			break;
			case 4:
				impton=cal*1.016e+9;
				printf("%.f Imperial Ton Convert To %.f Miligram",cal,impton);
			break;
			case 5:
				impton=cal*1.016e+12;
				printf("%.f Imperial Ton Convert To %.f Microgram",cal,impton);
			break;
			case 6:
				impton=cal*160;
				printf("%.f Imperial Ton Convert To %.f Stone",cal,impton);
			break;
			case 7:
				impton=cal*2240;
				printf("%.f Imperial Ton Convert To %.f Pound",cal,impton);
			break;
			case 8:
				impton=cal*35840;
				printf("%.f Imperial Ton Convert To %.f Ounce",cal,impton);
			break;								
		}
		break;
		
		case 7:
			printf("******Stone To******\n\n");
			
			printf("\n1. Stone Convert To Tonne");
			printf("\n2. Stone Convert To kilogram");
			printf("\n3. Stone Convert To Gram");
			printf("\n4. Stone Convert To Miligram");
			printf("\n5. Stone Convert To Microgram");
			printf("\n6. Stone Convert To Imperial Ton");
			printf("\n7. Stone Convert To Pound");
			printf("\n8. Stone Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nStone Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				stone=cal/157.473;
				printf("%.f Stone Convert To %.f Tonne",cal,stone);
			break;
			case 2:
				stone=cal*6.35;
				printf("%.f Stone Convert To %.f Kilogram",cal,stone);
			break;
			case 3:
				stone=cal*6350.293;
				printf("%.f Stone Convert To %.f Gram",cal,stone);
			break;
			case 4:
				stone=cal*6.35e+6;
				printf("%.f Stone Convert To %.f Miligram",cal,stone);
			break;
			case 5:
				stone=cal*6.35e+9;
				printf("%.f Stone Convert To %.f Microgram",cal,stone);
			break;
			case 6:
				stone=cal/160;
				printf("%.f Stone Convert To %.f Imperial Ton",cal,stone);
			break;
			case 7:
				stone=cal*14;
				printf("%.f Stone Convert To %.f Pound",cal,stone);
			break;
			case 8:
				stone=cal*224;
				printf("%.f Stone Convert To %.f Ounce",cal,stone);
			break;								
		}
		break;
		
		case 8:
			printf("******Pound To******\n\n");
			
			printf("\n1. Pound Convert To Tonne");
			printf("\n2. Pound Convert To kilogram");
			printf("\n3. Pound Convert To Gram");
			printf("\n4. Pound Convert To Miligram");
			printf("\n5. Pound Convert To Microgram");
			printf("\n6. Pound Convert To Imperial Ton");
			printf("\n7. Pound Convert To Stone");
			printf("\n8. Pound Convert To Ounce");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nPound Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				pound=cal/2204.623;
				printf("%.f Pound Convert To %.f Tonne",cal,pound);
			break;
			case 2:
				pound=cal/2.205;
				printf("%.f Pound Convert To %.f Kilogram",cal,pound);
			break;
			case 3:
				pound=cal*453.592;
				printf("%.f Pound Convert To %.f Gram",cal,pound);
			break;
			case 4:
				pound=cal*453592.37;
				printf("%.f Pound Convert To %.f Miligram",cal,pound);
			break;
			case 5:
				pound=cal*4.536e+8;
				printf("%.f Pound Convert To %.f Microgram",cal,pound);
			break;
			case 6:
				pound=cal/2240;
				printf("%.f Pound Convert To %.f Imperial Ton",cal,pound);
			break;
			case 7:
				pound=cal/14;
				printf("%.f Pound Convert To %.f Stone",cal,pound);
			break;
			case 8:
				pound=cal*16;
				printf("%.f Pound Convert To %.f Ounce",cal,pound);
			break;								
		}
		break;
		
		case 9:
			printf("******Ounce To******\n\n");
			
			printf("\n1. Ounce Convert To Tonne");
			printf("\n2. Ounce Convert To kilogram");
			printf("\n3. Ounce Convert To Gram");
			printf("\n4. Ounce Convert To Miligram");
			printf("\n5. Ounce Convert To Microgram");
			printf("\n6. Ounce Convert To Imperial Ton");
			printf("\n7. Ounce Convert To Stone");
			printf("\n8. Ounce Convert To Pound");
		printf("\n\nEnter The Value:");
		scanf("%f",&cal);
		printf("\nOunce Convert To:");
		scanf("%d",&wecon);
		switch(wecon)
		{
			case 1:
				ounce=cal/35273.962;
				printf("%.f Ounce Convert To %.f Tonne",cal,ounce);
			break;
			case 2:
				ounce=cal/35.274;
				printf("%.f Ounce Convert To %.f Kilogram",cal,ounce);
			break;
			case 3:
				ounce=cal*28.35;
				printf("%.f Ounce Convert To %.f Gram",cal,ounce);
			break;
			case 4:
				ounce=cal*28349.523;
				printf("%.f Ounce Convert To %.f Miligram",cal,ounce);
			break;
			case 5:
				ounce=cal*2.835e+7;
				printf("%.f Ounce Convert To %.f Microgram",cal,ounce);
			break;
			case 6:
				ounce=cal/35840;
				printf("%.f Ounce Convert To %.f Imperial Ton",cal,ounce);
			break;
			case 7:
				ounce=cal/224;
				printf("%.f Ounce Convert To %.f Stone",cal,ounce);
			break;
			case 8:
				ounce=cal/16;
				printf("%.f Ounce Convert To %.f Pound",cal,ounce);
			break;								
		}
		break;
	}
	break;
	case 4:
			printf("***Volume Converter***\n\n");
			printf("\n1. CUBIC METER Converter");
			printf("\n2. LITER Converter");
			printf("\n3. MILILITER Converter");
			printf("\n4. IMPERIAL GALLON Converter");
			printf("\n5. IMPERIAL QUART Converter");
			printf("\n6. IMPERIAL PINT Converter");
			printf("\n7. IMPERIAL CUP Converter");
			printf("\n8. IMPERIAL FLUID OUNCE Converter");
			printf("\n9. IMPERIAL TABLESPOON Converter");
			printf("\n10. IMPERIAL TEASPOON Converter");
			printf("\n11. CUBIC FOOT Converter");
			printf("\n12. CUBIC INCH Converter");
		printf("\n\nEnter The Volume:");
		scanf("%d",&volume);
		system("cls");
		switch(volume)
		{
		case 1:
			printf("******Cubic Meter Convert To******\n\n");
			
			printf("\n1. Cubic Meter Convert To Liter");
			printf("\n2. Cubic Meter Convert To Mililiter");
			printf("\n3. Cubic Meter Convert To Imperial Gallon");
			printf("\n4. Cubic Meter Convert To Imperial Quart");
			printf("\n5. Cubic Meter Convert To Imperial Pint");
			printf("\n6. Cubic Meter Convert To Imperial Cup");
			printf("\n7. Cubic Meter Convert To Imperial Fluid Ounce");
			printf("\n8. Cubic Meter Convert To Immperial Tablespoon");
			printf("\n9. Cubic Meter Convert To Imperial Teaspoon");
			printf("\n10. Cubic Meter Convert To Cubic Foot");
			printf("\n11. Cubic Meter Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nCubic Meter Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				cum=val*1000;
				printf("%.f Cubic Meter Convert To %.f Liter",val,cum);
			break;
			case 2:
				cum=val*1e+6;
				printf("%.f Cubic Meter Convert To %.f Mililiter",val,cum);
			break;
			case 3:
				cum=val*219.969;
				printf("%.f Cubic Meter Convert To %.f Imperial Gallon",val,cum);
			break;
			case 4:
				cum=val*879.877;
				printf("%.f Cubic Meter Convert To %.f Imperial Quart",val,cum);
			break;
			case 5:
				cum=val*1759.754;
				printf("%.f Cubic Meter Convert To %.f Imperial Pint",val,cum);
			break;
			case 6:
				cum=val*3519.508;
				printf("%.f Cubic Meter Convert To %.f Imperial Cup",val,cum);
			break;
			case 7:
				cum=val*35195.08;
				printf("%.f Cubic Meter Convert To %.f Imperial Fluid Ounce",val,cum);
			break;
			case 8:
				cum=val*56312.104;
				printf("%.f Cubic Meter Convert To %.f Imperial Tablespoon",val,cum);
			break;
			case 9:
				cum=val*168936.313;
				printf("%.f Cubic Meter Convert To %.f Imperial Teaspoon",val,cum);
			break;
			case 10:
				cum=val*35.315;
				printf("%.f Cubic Meter Convert To %.f Cubic Foot",val,cum);
			break;
			case 11:
				cum=val*61023.744;
				printf("%.f Cubic Meter Convert To %.f Cubic Inch",val,cum);
			break;								
			}
		break;
		
		case 2:
			printf("******Liter Convert To******\n\n");
			
			printf("\n1. Liter Convert To Cubic Meter");
			printf("\n2. Liter Convert To Mililiter");
			printf("\n3. Liter Convert To Imperial Gallon");
			printf("\n4. Liter Convert To Imperial Quart");
			printf("\n5. Liter Convert To Imperial Pint");
			printf("\n6. Liter Convert To Imperial Cup");
			printf("\n7. Liter Convert To Imperial Fluid Ounce");
			printf("\n8. Liter Convert To Immperial Tablespoon");
			printf("\n9. Liter Convert To Imperial Teaspoon");
			printf("\n10. Liter Convert To Cubic Foot");
			printf("\n11. Liter Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nLiter Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				li=val*61.024;
				printf("%.f Liter Convert To %.f Cubic Meter",val,li);
			break;
			case 2:
				li=val*1000;
				printf("%.f Liter Convert To %.f Mililiter",val,li);
			break;
			case 3:
				li=val/4.546;
				printf("%.f Liter Convert To %.f Imperial Gallon",val,li);
			break;
			case 4:
				li=val/1.137;
				printf("%.f Liter Convert To %.f Imperial Quart",val,li);
			break;
			case 5:
				li=val*1.76;
				printf("%.f Liter Convert To %.f Imperial Pint",val,li);
			break;
			case 6:
				li=val*3.52;
				printf("%.f Liter Convert To %.f Imperial Cup",val,li);
			break;
			case 7:
				li=val*35.195;
				printf("%.f Liter Convert To %.f Imperial Fluid Ounce",val,li);
			break;
			case 8:
				li=val*56.312;
				printf("%.f Liter Convert To %.f Imperial Tablespoon",val,li);
			break;
			case 9:
				li=val*168.936;
				printf("%.f Liter Convert To %.f Imperial Teaspoon",val,li);
			break;
			case 10:
				li=val/28.317;
				printf("%.f Liter Convert To %.f Cubic Foot",val,li);
			break;
			case 11:
				li=val*61.024;
				printf("%.f Liter Convert To %.f Cubic Inch",val,li);
			break;								
			}
		break;
		
		case 3:
			printf("******Mililiter Convert To******\n\n");
			
			printf("\n1. Mililiter Convert To Cubic Meter");
			printf("\n2. Mililiter Convert To Liter");
			printf("\n3. Mililiter Convert To Imperial Gallon");
			printf("\n4. Mililiter Convert To Imperial Quart");
			printf("\n5. Mililiter Convert To Imperial Pint");
			printf("\n6. Mililiter Convert To Imperial Cup");
			printf("\n7. Mililiter Convert To Imperial Fluid Ounce");
			printf("\n8. Mililiter Convert To Immperial Tablespoon");
			printf("\n9. Mililiter Convert To Imperial Teaspoon");
			printf("\n10. Mililiter Convert To Cubic Foot");
			printf("\n11. Mililiter Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nMililiter Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				ml=val/1e+6;
				printf("%.f Mililiter Convert To %.f Cubic Meter",val,ml);
			break;
			case 2:
				ml=val/1000;
				printf("%.f Mililiter Convert To %.f Liter",val,ml);
			break;
			case 3:
				ml=val/4546.09;
				printf("%.f Mililiter Convert To %.f Imperial Gallon",val,ml);
			break;
			case 4:
				ml=val/1136.522;
				printf("%.f Mililiter Convert To %.f Imperial Quart",val,ml);
			break;
			case 5:
				ml=val/568.261;
				printf("%.f Mililiter Convert To %.f Imperial Pint",val,ml);
			break;
			case 6:
				ml=val/284.131;
				printf("%.f Mililiter Convert To %.f Imperial Cup",val,ml);
			break;
			case 7:
				ml=val/28.413;
				printf("%.f Mililiter Convert To %.f Imperial Fluid Ounce",val,ml);
			break;
			case 8:
				ml=val/17.758;
				printf("%.f Mililiter Convert To %.f Imperial Tablespoon",val,ml);
			break;
			case 9:
				ml=val/5.919;
				printf("%.f Mililiter Convert To %.f Imperial Teaspoon",val,ml);
			break;
			case 10:
				ml=val/28316.847;
				printf("%.f Mililiter Convert To %.f Cubic Foot",val,ml);
			break;
			case 11:
				ml=val/16.387;
				printf("%.f Mililiter Convert To %.f Cubic Inch",val,ml);
			break;								
			}
		break;
		
		case 4:
			printf("******Imperial Gallon To******\n\n");
			
			printf("\n1. Imperial Gallon Convert To Cubic Meter");
			printf("\n2. Imperial Gallon Convert To Liter");
			printf("\n3. Imperial Gallon Convert To Mililiter");
			printf("\n4. Imperial Gallon Convert To Imperial Quart");
			printf("\n5. Imperial Gallon Convert To Imperial Pint");
			printf("\n6. Imperial Gallon Convert To Imperial Cup");
			printf("\n7. Imperial Gallon Convert To Imperial Fluid Ounce");
			printf("\n8. Imperial Gallon Convert To Immperial Tablespoon");
			printf("\n9. Imperial Gallon Convert To Imperial Teaspoon");
			printf("\n10. Imperial Gallon Convert To Cubic Foot");
			printf("\n11. Imperial Gallon Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nImperial Gallon Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				impgallon=val/219.969;
				printf("%.f Imperial Gallon Convert To %.f Cubic Meter",val,impgallon);
			break;
			case 2:
				impgallon=val*4.546;
				printf("%.f Imperial Gallon Convert To %.f Liter",val,impgallon);
			break;
			case 3:
				impgallon=val*4546.09;
				printf("%.f Imperial Gallon Convert To %.f Mililiter",val,impgallon);
			break;
			case 4:
				impgallon=val*4;
				printf("%.f Imperial Gallon Convert To %.f Imperial Quart",val,impgallon);
			break;
			case 5:
				impgallon=val*8;
				printf("%.f Imperial Gallon Convert To %.f Imperial Pint",val,impgallon);
			break;
			case 6:
				impgallon=val*16;
				printf("%.f Imperial Gallon Convert To %.f Imperial Cup",val,impgallon);
			break;
			case 7:
				impgallon=val*160;
				printf("%.f Imperial Gallon Convert To %.f Imperial Fluid Ounce",val,impgallon);
			break;
			case 8:
				impgallon=val*256;
				printf("%.f Imperial Gallon Convert To %.f Imperial Tablespoon",val,impgallon);
			break;
			case 9:
				impgallon=val*768;
				printf("%.f Imperial Gallon Convert To %.f Imperial Teaspoon",val,impgallon);
			break;
			case 10:
				impgallon=val/6.229;
				printf("%.f Imperial Gallon Convert To %.f Cubic Foot",val,impgallon);
			break;
			case 11:
				impgallon=val*277.419;
				printf("%.f Imperial Gallon Convert To %.f Cubic Inch",val,impgallon);
			break;								
			}
		break;
		
		case 5:
			printf("******Imperial Quart To******\n\n");
			
			printf("\n1. Imperial Quart Convert To Cubic Meter");
			printf("\n2. Imperial Quart Convert To Liter");
			printf("\n3. Imperial Quart Convert To Mililiter");
			printf("\n4. Imperial Quart Convert To Imperial Gallon");
			printf("\n5. Imperial Quart Convert To Imperial Pint");
			printf("\n6. Imperial Quart Convert To Imperial Cup");
			printf("\n7. Imperial Quart Convert To Imperial Fluid Ounce");
			printf("\n8. Imperial Quart Convert To Immperial Tablespoon");
			printf("\n9. Imperial Quart Convert To Imperial Teaspoon");
			printf("\n10. Imperial Quart Convert To Cubic Foot");
			printf("\n11. Imperial Quart Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nImperial Quart Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				impquart=val/879.877;
				printf("%.f Imperial Quart Convert To %.f Cubic Meter",val,impquart);
			break;
			case 2:
				impquart=val*1.137;
				printf("%.f Imperial Quart Convert To %.f Liter",val,impquart);
			break;
			case 3:
				impquart=val*1136.522;
				printf("%.f Imperial Quart Convert To %.f Mililiter",val,impquart);
			break;
			case 4:
				impquart=val/4;
				printf("%.f Imperial Quart Convert To %.f Imperial Gallon",val,impquart);
			break;
			case 5:
				impquart=val*2;
				printf("%.f Imperial Quart Convert To %.f Imperial Pint",val,impquart);
			break;
			case 6:
				impquart=val*4;
				printf("%.f Imperial Quart Convert To %.f Imperial Cup",val,impquart);
			break;
			case 7:
				impquart=val*40;
				printf("%.f Imperial Quart Convert To %.f Imperial Fluid Ounce",val,impquart);
			break;
			case 8:
				impquart=val*64;
				printf("%.f Imperial Quart Convert To %.f Imperial Tablespoon",val,impquart);
			break;
			case 9:
				impquart=val*192;
				printf("%.f Imperial Quart Convert To %.f Imperial Teaspoon",val,impquart);
			break;
			case 10:
				impquart=val/24.915;
				printf("%.f Imperial Quart Convert To %.f Cubic Foot",val,impquart);
			break;
			case 11:
				impquart=val*69.355;
				printf("%.f Imperial Quart Convert To %.f Cubic Inch",val,impquart);
			break;								
			}
		break;
		
		case 6:
			printf("******Imperial Pint To******\n\n");
			
			printf("\n1. Imperial Pint Convert To Cubic Meter");
			printf("\n2. Imperial Pint Convert To Liter");
			printf("\n3. Imperial Pint Convert To Mililiter");
			printf("\n4. Imperial Pint Convert To Imperial Gallon");
			printf("\n5. Imperial Pint Convert To Imperial Quart");
			printf("\n6. Imperial Pint Convert To Imperial Cup");
			printf("\n7. Imperial Pint Convert To Imperial Fluid Ounce");
			printf("\n8. Imperial Pint Convert To Immperial Tablespoon");
			printf("\n9. Imperial Pint Convert To Imperial Teaspoon");
			printf("\n10. Imperial Pint Convert To Cubic Foot");
			printf("\n11. Imperial Pint Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nImperial Pint Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				imppint=val/1759.754;
				printf("%.f Imperial Pint Convert To %.f Cubic Meter",val,imppint);
			break;
			case 2:
				imppint=val/1.76;
				printf("%.f Imperial Pint Convert To %.f Liter",val,imppint);
			break;
			case 3:
				imppint=val*568.261;
				printf("%.f Imperial Pint Convert To %.f Mililiter",val,imppint);
			break;
			case 4:
				imppint=val/8;
				printf("%.f Imperial Pint Convert To %.f Imperial Gallon",val,imppint);
			break;
			case 5:
				imppint=val/2;
				printf("%.f Imperial Pint Convert To %.f Imperial Quart",val,imppint);
			break;
			case 6:
				imppint=val*2;
				printf("%.f Imperial Pint Convert To %.f Imperial Cup",val,imppint);
			break;
			case 7:
				imppint=val*20;
				printf("%.f Imperial Pint Convert To %.f Imperial Fluid Ounce",val,imppint);
			break;
			case 8:
				imppint=val*32;
				printf("%.f Imperial Pint Convert To %.f Imperial Tablespoon",val,imppint);
			break;
			case 9:
				imppint=val*96;
				printf("%.f Imperial Pint Convert To %.f Imperial Teaspoon",val,imppint);
			break;
			case 10:
				imppint=val/49.831;
				printf("%.f Imperial Pint Convert To %.f Cubic Foot",val,imppint);
			break;
			case 11:
				imppint=val*34.677;
				printf("%.f Imperial Pint Convert To %.f Cubic Inch",val,imppint);
			break;								
			}
		break;
		
		case 7:
			printf("******Imperial Cup To******\n\n");
			
			printf("\n1. Imperial Cup Convert To Cubic Meter");
			printf("\n2. Imperial Cup Convert To Liter");
			printf("\n3. Imperial Cup Convert To Mililiter");
			printf("\n4. Imperial Cup Convert To Imperial Gallon");
			printf("\n5. Imperial Cup Convert To Imperial Quart");
			printf("\n6. Imperial Cup Convert To Imperial Pint");
			printf("\n7. Imperial Cup Convert To Imperial Fluid Ounce");
			printf("\n8. Imperial Cup Convert To Immperial Tablespoon");
			printf("\n9. Imperial Cup Convert To Imperial Teaspoon");
			printf("\n10. Imperial Cup Convert To Cubic Foot");
			printf("\n11. Imperial Cup Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nImperial Cup Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				impcup=val/3519.508;
				printf("%.f Imperial Cup Convert To %.f Cubic Meter",val,impcup);
			break;
			case 2:
				impcup=val/3.52;
				printf("%.f Imperial Cup Convert To %.f Liter",val,impcup);
			break;
			case 3:
				impcup=val*284.131;
				printf("%.f Imperial Cup Convert To %.f Mililiter",val,impcup);
			break;
			case 4:
				impcup=val/16;
				printf("%.f Imperial Cup Convert To %.f Imperial Gallon",val,impcup);
			break;
			case 5:
				impcup=val/4;
				printf("%.f Imperial Cup Convert To %.f Imperial Quart",val,impcup);
			break;
			case 6:
				impcup=val/2;
				printf("%.f Imperial Cup Convert To %.f Imperial Pint",val,impcup);
			break;
			case 7:
				impcup=val*10;
				printf("%.f Imperial Cup Convert To %.f Imperial Fluid Ounce",val,impcup);
			break;
			case 8:
				impcup=val*16;
				printf("%.f Imperial Cup Convert To %.f Imperial Tablespoon",val,impcup);
			break;
			case 9:
				impcup=val*48;
				printf("%.f Imperial Cup Convert To %.f Imperial Teaspoon",val,impcup);
			break;
			case 10:
				impcup=val/99.661;
				printf("%.f Imperial Cup Convert To %.f Cubic Foot",val,impcup);
			break;
			case 11:
				impcup=val*17.339;
				printf("%.f Imperial Cup Convert To %.f Cubic Inch",val,impcup);
			break;								
			}
		break;
		
		case 8:
			printf("******Imperial Fluid Ounce To******\n\n");
			
			printf("\n1. Imperial Fluid Ounce Convert To Cubic Meter");
			printf("\n2. Imperial Fluid Ounce Convert To Liter");
			printf("\n3. Imperial Fluid Ounce Convert To Mililiter");
			printf("\n4. Imperial Fluid Ounce Convert To Imperial Gallon");
			printf("\n5. Imperial Fluid Ounce Convert To Imperial Quart");
			printf("\n6. Imperial Fluid Ounce Convert To Imperial Pint");
			printf("\n7. Imperial Fluid Ounce Convert To Imperial Cup");
			printf("\n8. Imperial Fluid Ounce Convert To Immperial Tablespoon");
			printf("\n9. Imperial Fluid Ounce Convert To Imperial Teaspoon");
			printf("\n10. Imperial Fluid Ounce Convert To Cubic Foot");
			printf("\n11. Imperial Fluid Ounce Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nImperial Fluid Ounce Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				impfo=val/35195.08;
				printf("%.f Imperial Fluid Ounce Convert To %.f Cubic Meter",val,impfo);
			break;
			case 2:
				impfo=val/35.195;
				printf("%.f Imperial Fluid Ounce Convert To %.f Liter",val,impfo);
			break;
			case 3:
				impfo=val*28.413;
				printf("%.f Imperial Fluid Ounce Convert To %.f Mililiter",val,impfo);
			break;
			case 4:
				impfo=val/160;
				printf("%.f Imperial Fluid Ounce Convert To %.f Imperial Gallon",val,impfo);
			break;
			case 5:
				impfo=val/40;
				printf("%.f Imperial Fluid Ounce Convert To %.f Imperial Quart",val,impfo);
			break;
			case 6:
				impfo=val/20;
				printf("%.f Imperial Fluid Ounce Convert To %.f Imperial Pint",val,impfo);
			break;
			case 7:
				impfo=val/10;
				printf("%.f Imperial Fluid Ounce Convert To %.f Imperial Cup",val,impfo);
			break;
			case 8:
				impfo=val*1.6;
				printf("%.f Imperial Fluid Ounce Convert To %.f Imperial Tablespoon",val,impfo);
			break;
			case 9:
				impfo=val*4.8;
				printf("%.f Imperial Fluid Ounce Convert To %.f Imperial Teaspoon",val,impfo);
			break;
			case 10:
				impfo=val/996.614;
				printf("%.f Imperial Fluid Ounce Convert To %.f Cubic Foot",val,impfo);
			break;
			case 11:
				impfo=val*1.734;
				printf("%.f Imperial Fluid Ounce Convert To %.f Cubic Inch",val,impfo);
			break;								
			}
		break;
		
		case 9:
			printf("******Imperial Tablespoon To******\n\n");
			
			printf("\n1. Imperial Tablespoon Convert To Cubic Meter");
			printf("\n2. Imperial Tablespoon Convert To Liter");
			printf("\n3. Imperial Tablespoon Convert To Mililiter");
			printf("\n4. Imperial Tablespoon Convert To Imperial Gallon");
			printf("\n5. Imperial Tablespoon Convert To Imperial Quart");
			printf("\n6. Imperial Tablespoon Convert To Imperial Pint");
			printf("\n7. Imperial Tablespoon Convert To Imperial Cup");
			printf("\n8. Imperial Tablespoon Convert To Immperial Fluid Ounce");
			printf("\n9. Imperial Tablespoon Convert To Imperial Teaspoon");
			printf("\n10. Imperial Tablespoon Convert To Cubic Foot");
			printf("\n11. Imperial Tablespoon Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nImperial Tablespoon Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				imptab=val/56312.104;
				printf("%.f Imperial Tablespoon Convert To %.f Cubic Meter",val,imptab);
			break;
			case 2:
				imptab=val/56.312;
				printf("%.f Imperial Tablespoon Convert To %.f Liter",val,imptab);
			break;
			case 3:
				imptab=val*17.758;
				printf("%.f Imperial Tablespoon Convert To %.f Mililiter",val,imptab);
			break;
			case 4:
				imptab=val/256;
				printf("%.f Imperial Tablespoon Convert To %.f Imperial Gallon",val,imptab);
			break;
			case 5:
				imptab=val/64;
				printf("%.f Imperial Tablespoon Convert To %.f Imperial Quart",val,imptab);
			break;
			case 6:
				imptab=val/32;
				printf("%.f Imperial Tablespoon Convert To %.f Imperial Pint",val,imptab);
			break;
			case 7:
				imptab=val/16;
				printf("%.f Imperial Tablespoon Convert To %.f Imperial Cup",val,imptab);
			break;
			case 8:
				imptab=val/1.6;
				printf("%.f Imperial Tablespoon Convert To %.f Imperial Fluid Ounce",val,imptab);
			break;
			case 9:
				imptab=val*3;
				printf("%.f Imperial Tablespoon Convert To %.f Imperial Teaspoon",val,imptab);
			break;
			case 10:
				imptab=val/1594.581;
				printf("%.f Imperial Tablespoon Convert To %.f Cubic Foot",val,imptab);
			break;
			case 11:
				imptab=val*1.084;
				printf("%.f Imperial Tablespoon Convert To %.f Cubic Inch",val,imptab);
			break;								
			}
		break;
		
		case 10:
			printf("******Imperial Teaspoon To******\n\n");
			
			printf("\n1. Imperial Teaspoon Convert To Cubic Meter");
			printf("\n2. Imperial Teaspoon Convert To Liter");
			printf("\n3. Imperial Teaspoon Convert To Mililiter");
			printf("\n4. Imperial Teaspoon Convert To Imperial Gallon");
			printf("\n5. Imperial Teaspoon Convert To Imperial Quart");
			printf("\n6. Imperial Teaspoon Convert To Imperial Pint");
			printf("\n7. Imperial Teaspoon Convert To Imperial Cup");
			printf("\n8. Imperial Teaspoon Convert To Immperial Fluid Ounce");
			printf("\n9. Imperial Teaspoon Convert To Imperial Tablespoon");
			printf("\n10. Imperial Teaspoon Convert To Cubic Foot");
			printf("\n11. Imperial Teaspoon Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nImperial Teaspoon Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				imptea=val/168936.313;
				printf("%.f Imperial Teaspoon Convert To %.f Cubic Meter",val,imptea);
			break;
			case 2:
				imptea=val/168.936;
				printf("%.f Imperial Teaspoon Convert To %.f Liter",val,imptea);
			break;
			case 3:
				imptea=val*5.919;
				printf("%.f Imperial Teaspoon Convert To %.f Mililiter",val,imptea);
			break;
			case 4:
				imptea=val/768;
				printf("%.f Imperial Teaspoon Convert To %.f Imperial Gallon",val,imptea);
			break;
			case 5:
				imptea=val/192;
				printf("%.f Imperial Teaspoon Convert To %.f Imperial Quart",val,imptea);
			break;
			case 6:
				imptea=val/96;
				printf("%.f Imperial Teaspoon Convert To %.f Imperial Pint",val,imptea);
			break;
			case 7:
				imptea=val/48;
				printf("%.f Imperial Teaspoon Convert To %.f Imperial Cup",val,imptea);
			break;
			case 8:
				imptea=val/4.8;
				printf("%.f Imperial Teaspoon Convert To %.f Imperial Fluid Ounce",val,imptea);
			break;
			case 9:
				imptea=val/3;
				printf("%.f Imperial Teaspoon Convert To %.f Imperial Tablespoon",val,imptea);
			break;
			case 10:
				imptea=val/4783.744;
				printf("%.f Imperial Teaspoon Convert To %.f Cubic Foot",val,imptea);
			break;
			case 11:
				imptea=val/2.768;
				printf("%.f Imperial Teaspoon Convert To %.f Cubic Inch",val,imptea);
			break;								
			}
		break;
		
		case 11:
			printf("******Cubic Foot To******\n\n");
			
			printf("\n1. Cubic Foot Convert To Cubic Meter");
			printf("\n2. Cubic Foot Convert To Liter");
			printf("\n3. Cubic Foot Convert To Mililiter");
			printf("\n4. Cubic Foot Convert To Imperial Gallon");
			printf("\n5. Cubic Foot Convert To Imperial Quart");
			printf("\n6. Cubic Foot Convert To Imperial Pint");
			printf("\n7. Cubic Foot Convert To Imperial Cup");
			printf("\n8. Cubic Foot Convert To Immperial Fluid Ounce");
			printf("\n9. Cubic Foot Convert To Imperial Tablespoon");
			printf("\n10. Cubic Foot Convert To Teaspoon");
			printf("\n11. Cubic Foot Convert To Cubic Inch");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nCubic Foot Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				cuf=val/35.315;
				printf("%.f Cubic Foot Convert To %.f Cubic Meter",val,cuf);
			break;
			case 2:
				cuf=val*28.317;
				printf("%.f Cubic Foot Convert To %.f Liter",val,cuf);
			break;
			case 3:
				cuf=val*28316.847;
				printf("%.f Cubic Foot Convert To %.f Mililiter",val,cuf);
			break;
			case 4:
				cuf=val*6.229;
				printf("%.f Cubic Foot Convert To %.f Imperial Gallon",val,cuf);
			break;
			case 5:
				cuf=val*24.915;
				printf("%.f Cubic Foot Convert To %.f Imperial Quart",val,cuf);
			break;
			case 6:
				cuf=val*49.831;
				printf("%.f Cubic Foot Convert To %.f Imperial Pint",val,cuf);
			break;
			case 7:
				cuf=val*99.661;
				printf("%.f Cubic Foot Convert To %.f Imperial Cup",val,cuf);
			break;
			case 8:
				cuf=val*996.614;
				printf("%.f Cubic Foot Convert To %.f Imperial Fluid Ounce",val,cuf);
			break;
			case 9:
				cuf=val*1594.581;
				printf("%.f Cubic Foot Convert To %.f Imperial Tablespoon",val,cuf);
			break;
			case 10:
				cuf=val*4783.744;
				printf("%.f Cubic Foot Convert To %.f Imperial Teaspoon",val,cuf);
			break;
			case 11:
				cuf=val*1728;
				printf("%.f Cubic Foot Convert To %.f Cubic Inch",val,cuf);
			break;								
			}
		break;
		
		case 12:
			printf("******Cubic Inch To******\n\n");
			
			printf("\n1. Cubic Inch Convert To Cubic Meter");
			printf("\n2. Cubic Inch Convert To Liter");
			printf("\n3. Cubic Inch Convert To Mililiter");
			printf("\n4. Cubic Inch Convert To Imperial Gallon");
			printf("\n5. Cubic Inch Convert To Imperial Quart");
			printf("\n6. Cubic Inch Convert To Imperial Pint");
			printf("\n7. Cubic Inch Convert To Imperial Cup");
			printf("\n8. Cubic Inch Convert To Immperial Fluid Ounce");
			printf("\n9. Cubic Inch Convert To Imperial Tablespoon");
			printf("\n10. Cubic Inch Convert To Imperial Teaspoon");
			printf("\n11. Cubic Inch Convert To Cubic Foot");
			printf("\n\nEnter The Value:");
			scanf("%f",&val);
			printf("\nCubic Inch Convert To:");
			scanf("%d",&vocon);
			switch(vocon)
			{
			case 1:
				cui=val/61023.744;
				printf("%.f Cubic Inch Convert To %.f Cubic Meter",val,cui);
			break;
			case 2:
				cui=val/61.024;
				printf("%.f Cubic Inch Convert To %.f Liter",val,cui);
			break;
			case 3:
				cui=val*16.387;
				printf("%.f Cubic Inch Convert To %.f Mililiter",val,cui);
			break;
			case 4:
				cui=val/277.419;
				printf("%.f Cubic Inch Convert To %.f Imperial Gallon",val,cui);
			break;
			case 5:
				cui=val/69.355;
				printf("%.f Cubic Inch Convert To %.f Imperial Quart",val,cui);
			break;
			case 6:
				cui=val/34.677;
				printf("%.f Cubic Inch Convert To %.f Imperial Pint",val,cui);
			break;
			case 7:
				cui=val/17.339;
				printf("%.f Cubic Inch Convert To %.f Imperial Cup",val,cui);
			break;
			case 8:
				cui=val/1.734;
				printf("%.f Cubic Inch Convert To %.f Imperial Fluid Ounce",val,cui);
			break;
			case 9:
				cui=val/1.084;
				printf("%.f Cubic Inch Convert To %.f Imperial Tablespoon",val,cui);
			break;
			case 10:
				cui=val*2.768;
				printf("%.f Cubic Inch Convert To %.f Imperial Teaspoon",val,cui);
			break;
			case 11:
				cui=val/1728;
				printf("%.f Cubic Inch Convert To %.f Cubic Foot",val,cui);
			break;								
			}
		break;			
	}
	break;
	case 5:
			printf("***Area Converter To***\n\n");
			printf("\n1. SQUARE KILOMETER CONVERTER");
			printf("\n2. SQUARE METER CONVERTER");
			printf("\n3. SQUARE MILE CONVERTER");
			printf("\n4. SQUARE YARD CONVERTER");
			printf("\n5. SQUARE FOOT CONVERTER");
			printf("\n6. SQUARE INCH CONVERTER");
			printf("\n7. HECTARE CONVERTER");
			printf("\n8. ACRE CONVERTER");
		printf("\n\nEnter The Converter:");
		scanf("%d",&area);
		system("cls");
		switch(area)
		{
		case 1:
			printf("******Square Kilometer Convert To******\n\n");
			
			printf("\n1. Square Kilometer Convert To Square Meter");
			printf("\n2. Square Kilometer Convert To Square Mile");
			printf("\n3. Square Kilometer Convert To Square Yard");
			printf("\n4. Square Kilometer Convert To Square Foot");
			printf("\n5. Square Kilometer Convert To Square Inch");
			printf("\n6. Square Kilometer Convert To Hectare");
			printf("\n7. Square Kilometer Convert To Acre");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nSquare Kilometer Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				sqkm=x*1e+6;
				printf("%.f Square Kilometer Convert To %.f Square Meter",x,sqkm);
			break;
			case 2:
				sqkm=x/2.59;
				printf("%.f Square Kilometer Convert To %.f Square Mile",x,sqkm);
			break;
			case 3:
				sqkm=x*1.196e+6;
				printf("%.f Square Kilometer Convert To %.f Square Yard",x,sqkm);
			break;
			case 4:
				sqkm=x*1.076e+7;
				printf("%.f Square Kilometer Convert To %.f Square Foot",x,sqkm);
			break;
			case 5:
				sqkm=x*1.55e+9;
				printf("%.f Square Kilometer Convert To %.f Square Inch",x,sqkm);
			break;
			case 6:
				sqkm=x*100;
				printf("%.f Square Kilometer Convert To %.f Hectare",x,sqkm);
			break;
			case 7:
				sqkm=x*247.105;
				printf("%.f Square Kilometer Convert To %.f Acre",x,sqkm);
			break;
			}
		break;
		
		case 2:
			printf("******Square Meter Convert To******\n\n");
			
			printf("\n1. Square Meter Convert To Square Kilometer");
			printf("\n2. Square Meter Convert To Square Mile");
			printf("\n3. Square Meter Convert To Square Yard");
			printf("\n4. Square Meter Convert To Square Foot");
			printf("\n5. Square Meter Convert To Square Inch");
			printf("\n6. Square Meter Convert To Hectare");
			printf("\n7. Square Meter Convert To Acre");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nSquare Meter Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				sqm=x/1e+6;
				printf("%.f Square Meter Convert To %.f Square Kilometer",x,sqm);
			break;
			case 2:
				sqm=x/2.59e+6;
				printf("%.f Square Meter Convert To %.f Square Mile",x,sqm);
			break;
			case 3:
				sqm=x*1.196;
				printf("%.f Square Meter Convert To %.f Square Yard",x,sqm);
			break;
			case 4:
				sqm=x*10.764;
				printf("%.f Square Meter Convert To %.f Square Foot",x,sqm);
			break;
			case 5:
				sqm=x*1550.003;
				printf("%.f Square Meter Convert To %.f Square Inch",x,sqm);
			break;
			case 6:
				sqm=x/10000;
				printf("%.f Square Meter Convert To %.f Hectare",x,sqm);
			break;
			case 7:
				sqm=x/4046.856;
				printf("%.f Square Meter Convert To %.f Acre",x,sqm);
			break;
			}
		break;
		
		case 3:
			printf("******Square Mile Convert To******\n\n");
			
			printf("\n1. Square Mile Convert To Square Kilometer");
			printf("\n2. Square Mile Convert To Square Meter");
			printf("\n3. Square Mile Convert To Square Yard");
			printf("\n4. Square Mile Convert To Square Foot");
			printf("\n5. Square Mile Convert To Square Inch");
			printf("\n6. Square Mile Convert To Hectare");
			printf("\n7. Square Mile Convert To Acre");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nSquare Mile Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				sqmile=x*2.59;
				printf("%.f Square Mile Convert To %.f Square Kilometer",x,sqmile);
			break;
			case 2:
				sqmile=x*2.59e+6;
				printf("%.f Square Mile Convert To %.f Square Meter",x,sqmile);
			break;
			case 3:
				sqmile=x*3.098e+6;
				printf("%.f Square Mile Convert To %.f Square Yard",x,sqmile);
			break;
			case 4:
				sqmile=x*2.788e+7;
				printf("%.f Square Mile Convert To %.f Square Foot",x,sqmile);
			break;
			case 5:
				sqmile=x*4.014e+9;
				printf("%.f Square Mile Convert To %.f Square Inch",x,sqmile);
			break;
			case 6:
				sqmile=x*258.999;
				printf("%.f Square Mile Convert To %.f Hectare",x,sqmile);
			break;
			case 7:
				sqmile=x*640;
				printf("%.f Square Mile Convert To %.f Acre",x,sqmile);
			break;
			}
		break;
		
		case 4:
			printf("******Square Yard Convert To******\n\n");
			
			printf("\n1. Square Yard Convert To Square Kilometer");
			printf("\n2. Square Yard Convert To Square Meter");
			printf("\n3. Square Yard Convert To Square Mile");
			printf("\n4. Square Yard Convert To Square Foot");
			printf("\n5. Square Yard Convert To Square Inch");
			printf("\n6. Square Yard Convert To Hectare");
			printf("\n7. Square Yard Convert To Acre");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nSquare Yard Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				sqyard=x/1.196e+6;
				printf("%.f Square Yard Convert To %.f Square Kilometer",x,sqyard);
			break;
			case 2:
				sqyard=x/1.196;
				printf("%.f Square Yard Convert To %.f Square Meter",x,sqyard);
			break;
			case 3:
				sqyard=x/3.098e+6;
				printf("%.f Square Yard Convert To %.f Square Mile",x,sqyard);
			break;
			case 4:
				sqyard=x*9;
				printf("%.f Square Yard Convert To %.f Square Foot",x,sqyard);
			break;
			case 5:
				sqyard=x*1296;
				printf("%.f Square Yard Convert To %.f Square Inch",x,sqyard);
			break;
			case 6:
				sqyard=x/11959.9;
				printf("%.f Square Yard Convert To %.f Hectare",x,sqyard);
			break;
			case 7:
				sqyard=x/4840;
				printf("%.f Square Yard Convert To %.f Acre",x,sqyard);
			break;
			}
		break;
		
		case 5:
			printf("******Square Foot Convert To******\n\n");
			
			printf("\n1. Square Foot Convert To Square Kilometer");
			printf("\n2. Square Foot Convert To Square Meter");
			printf("\n3. Square Foot Convert To Square Mile");
			printf("\n4. Square Foot Convert To Square Yard");
			printf("\n5. Square Foot Convert To Square Inch");
			printf("\n6. Square Foot Convert To Hectare");
			printf("\n7. Square Foot Convert To Acre");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nSquare Foot Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				sqf=x/1.076e+7;
				printf("%.f Square Foot Convert To %.f Square Kilometer",x,sqf);
			break;
			case 2:
				sqf=x/10.764;
				printf("%.f Square Foot Convert To %.f Square Meter",x,sqf);
			break;
			case 3:
				sqf=x/2.788e+7;
				printf("%.f Square Foot Convert To %.f Square Mile",x,sqf);
			break;
			case 4:
				sqf=x/9;
				printf("%.f Square Foot Convert To %.f Square Yard",x,sqf);
			break;
			case 5:
				sqf=x*144;
				printf("%.f Square Foot Convert To %.f Square Inch",x,sqf);
			break;
			case 6:
				sqf=x/107639.104;
				printf("%.f Square Foot Convert To %.f Hectare",x,sqf);
			break;
			case 7:
				sqf=x/43560;
				printf("%.f Square Foot Convert To %.f Acre",x,sqf);
			break;
			}
		break;
		
		case 6:
			printf("******Square Inch Convert To******\n\n");
			
			printf("\n1. Square Inch Convert To Square Kilometer");
			printf("\n2. Square Inch Convert To Square Meter");
			printf("\n3. Square Inch Convert To Square Mile");
			printf("\n4. Square Inch Convert To Square Yard");
			printf("\n5. Square Inch Convert To Square Foot");
			printf("\n6. Square Inch Convert To Hectare");
			printf("\n7. Square Inch Convert To Acre");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nSquare Inch Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				sqi=x/1.55e+9;
				printf("%.f Square Inch Convert To %.f Square Kilometer",x,sqi);
			break;
			case 2:
				sqi=x/1550.003;
				printf("%.f Square Inch Convert To %.f Square Meter",x,sqi);
			break;
			case 3:
				sqi=x/4.014e+9;
				printf("%.f Square Inch Convert To %.f Square Mile",x,sqi);
			break;
			case 4:
				sqi=x/1296;
				printf("%.f Square Inch Convert To %.f Square Yard",x,sqi);
			break;
			case 5:
				sqi=x/144;
				printf("%.f Square Inch Convert To %.f Square Foot",x,sqi);
			break;
			case 6:
				sqi=x/1.55e+7;
				printf("%.f Square Inch Convert To %.f Hectare",x,sqi);
			break;
			case 7:
				sqi=x/6.273e+6;
				printf("%.f Square Inch Convert To %.f Acre",x,sqi);
			break;
			}
		break;
		
		case 7:
			printf("******Hectare Convert To******\n\n");
			
			printf("\n1. Hectare Convert To Square Kilometer");
			printf("\n2. Hectare Convert To Square Meter");
			printf("\n3. Hectare Convert To Square Mile");
			printf("\n4. Hectare Convert To Square Yard");
			printf("\n5. Hectare Convert To Square Foot");
			printf("\n6. Hectare Convert To Square Inch");
			printf("\n7. Hectare Convert To Acre");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nHectare Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				hec=x/100;
				printf("%.f Hectare Convert To %.f Square Kilometer",x,hec);
			break;
			case 2:
				hec=x*10000;
				printf("%.f Hectare Convert To %.f Square Meter",x,hec);
			break;
			case 3:
				hec=x/258.999;
				printf("%.f Hectare Convert To %.f Square Mile",x,hec);
			break;
			case 4:
				hec=x*11959.9;
				printf("%.f Hectare Convert To %.f Square Yard",x,hec);
			break;
			case 5:
				hec=x*107639.104;
				printf("%.f Hectare Convert To %.f Square Foot",x,hec);
			break;
			case 6:
				hec=x*1.55e+7;
				printf("%.f Hectare Convert To %.f Square Inch",x,hec);
			break;
			case 7:
				hec=x*2.471;
				printf("%.f Hectare Convert To %.f Acre",x,hec);
			break;
			}
		break;
		
		case 8:
			printf("******Acre Convert To******\n\n");
			
			printf("\n1. Acre Convert To Square Kilometer");
			printf("\n2. Acre Convert To Square Meter");
			printf("\n3. Acre Convert To Square Mile");
			printf("\n4. Acre Convert To Square Yard");
			printf("\n5. Acre Convert To Square Foot");
			printf("\n6. Acre Convert To Square Inch");
			printf("\n7. Acre Convert To Hevtare");
		printf("\n\nEnter The Value:");
		scanf("%f",&x);
		printf("\nAcre Convert To:");
		scanf("%d",&acon);
		switch(acon)
		{
			case 1:
				ac=x/247.105;
				printf("%.f Acre Convert To %.f Square Kilometer",x,ac);
			break;
			case 2:
				ac=x*4046.856;
				printf("%.f Acre Convert To %.f Square Meter",x,ac);
			break;
			case 3:
				ac=x/640;
				printf("%.f Acre Convert To %.f Square Mile",x,ac);
			break;
			case 4:
				ac=x*4840;
				printf("%.f Acre Convert To %.f Square Yard",x,ac);
			break;
			case 5:
				ac=x*43560;
				printf("%.f Acre Convert To %.f Square Foot",x,ac);
			break;
			case 6:
				ac=x*6.273e+6;
				printf("%.f Acre Convert To %.f Square Inch",x,ac);
			break;
			case 7:
				ac=x/2.471;
				printf("%.f Acre Convert To %.f Hectare",x,ac);
			break;
			}
		break;
	}
	break;
	
	case 6:
			printf("******Temperature Converter******\n\n");
			
			printf("\n1. Degree Convert To Kelvin");
			printf("\n2. Degree Convert To Radian");
			printf("\n3. Degree Fahrenheit Convert To Celsius");
			printf("\n4. Degree Celsius Convert To Fahrenheit");
		printf("\n\nEnter the value:");
		scanf("%f",&y);
		printf("\nDegree Convert To:");
		scanf("%d",&temp);
		switch(temp)
		{
			case 1:
				z=274.15*y;
				printf("\n %.f Degree Convert To %.f kelvin",y,z);
			break;
			case 2:
				z=0.0175*y;
				printf("\n %.f Degree Convert To %.f Radian",y,z);
			break;
			case 3:
				z=-17.222*y;
				printf("\n %.f Degree Fahrenheit Convert To %.f Celsius ",y,z);
			break;
			case 4:
				z=33.8*y;
				printf("\n %.f Degree Celsius To %.f Fahrenheit",y,z);
			break;
		}
	break;
	
	default:
			printf("\n\n**Please Enter The Correct Key**\n**Thank You**");
	break;
	}
}

