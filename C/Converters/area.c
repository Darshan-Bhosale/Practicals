#include<stdio.h>
#include<conio.h>
main()
{
	float sqkm,sqm,sqmile,sqyard,sqf,sqi,hec,ac,x;
	int area,acon;
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
}
