#include<stdio.h>
#include<conio.h>
main()
{
	float cum,li,ml,impgallon,impquart,imppint,impcup,impfo,imptab,imptea,cuf,cui,val;
	int volume,vocon;
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
}
