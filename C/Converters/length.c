#include<stdio.h>
#include<conio.h>
int main()
{
	float km,cm,m,milim,microm,nanom,mile,yard,foot,inch,nautical,dis;
	int length,lecon;
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
}
