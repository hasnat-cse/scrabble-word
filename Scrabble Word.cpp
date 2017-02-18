# include "iGraphics.h"
# include <string.h>
char str[]="AAAAAAAAAABBCCDDDDEEEEEEEEEEEEEFFGGGHHIIIIIIIIIJKLLLLMMNNNNNNOOOOOOOOPPQRRRRRRSSSSTTTTTTUUUUVVWWXYYZ";
int flag1=0,flag3=0,clag5=0,clag6=0,clag7=0,clag11=0;
int flag4=0,flag5=0,flag6=0,flag7=0,flag9=0,flag10=0,flag16=0,flag21=0,flag23=0,flag20=0,clag22=0;
int flag8=0,flag11=0,flag12=0,flag13=0,flag14=0,flag25=0,flag26=0,flag27=0;
int i,j,k,fx,fy,gy,gx,ax=330,by=330,n,count1=0,count2=0,count3=0,turn=2,total1=0,total2=0,check1=0,check2=0;
int move=0,h=0,w,f,z=0;
char temp[500],temp1[500],back[500],tiles[500],score1[500],score2[500];
char temporary[500],g;
char str3[200],str1[500],str2[]="ABCDEFGHIJKLMNO",str4[16][16],str5[500],str6[500],str7[500],str8[100];
int arr1[500],arr2[500],arr3[100],arr4[100],arr5[100],arr7[100],arr8[100];

void FirstScreen()					//Game's first screen
{
	iClear();
	iSetColor(200,50,250);
	iRectangle(0,0,1100,650);
	iFilledRectangle(0,0,1100,650);
	iSetColor(50,50,200);
	iEllipse(550,500,120,40);
	iFilledEllipse(550,500,120,40);
	iEllipse(550,410,120,40);
	iFilledEllipse(550,410,120,40);
	iEllipse(550,320,120,40);
	iFilledEllipse(550,320,120,40);
	iEllipse(550,230,120,40);
	iFilledEllipse(550,230,120,40);
	iSetColor(50,250,50);
	iText(490,490,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(488,400,"LOAD GAME",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(495,310,"MANUAL",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(520,220,"QUIT",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0,50,50);
	iText(935,150,"Arif 0905040",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(940,120,"CSE, BUET",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(920,80,"@MANGO INC.",GLUT_BITMAP_TIMES_ROMAN_24);
	for(i=0;str[i];i++)
		str3[i]=str[i];
	str3[i]='\0';
	for(i=0;i<16;i++)
	{
		for(j=0;j<15;j++)
			str4[i][j]='0';
		str4[i][j]='\0';
	}
}
void LoadGame()				//load the saved game
{
	FILE *fp;

	if((fp=fopen("Scrabble.txt","rb"))==NULL){
		printf("Cannot open file.\n");
		exit(1);
	}
	if(fread(&flag1,sizeof flag1,1,fp)!=1){
		printf("Error reading flag1.\n");
		exit(1);
	}
	if(fread(&flag3,sizeof flag3,1,fp)!=1){
		printf("Error reading flag3.\n");
		exit(1);
	}
	if(fread(&flag5,sizeof flag5,1,fp)!=1){
		printf("Error reading flag5.\n");
		exit(1);
	}
	if(fread(&flag6,sizeof flag6,1,fp)!=1){
		printf("Error reading flag6.\n");
		exit(1);
	}
	if(fread(&flag7,sizeof flag7,1,fp)!=1){
		printf("Error reading flag7.\n");
		exit(1);
	}
	if(fread(&flag8,sizeof flag8,1,fp)!=1){
		printf("Error reading flag8.\n");
		exit(1);
	}
	if(fread(&flag9,sizeof flag9,1,fp)!=1){
		printf("Error reading flag9.\n");
		exit(1);
	}
	if(fread(&flag10,sizeof flag10,1,fp)!=1){
		printf("Error reading flag10.\n");
		exit(1);
	}
	if(fread(&flag11,sizeof flag11,1,fp)!=1){
		printf("Error reading flag11.\n");
		exit(1);
	}
	if(fread(&flag12,sizeof flag12,1,fp)!=1){
		printf("Error reading flag12.\n");
		exit(1);
	}
	if(fread(&flag13,sizeof flag13,1,fp)!=1){
		printf("Error reading flag13.\n");
		exit(1);
	}
	if(fread(&flag14,sizeof flag14,1,fp)!=1){
		printf("Error reading flag14.\n");
		exit(1);
	}
	if(fread(&flag16,sizeof flag16,1,fp)!=1){
		printf("Error reading flag16.\n");
		exit(1);
	}
	if(fread(&flag20,sizeof flag20,1,fp)!=1){
		printf("Error reading flag17.\n");
		exit(1);
	}
	if(fread(&flag20,sizeof flag20,1,fp)!=1){
		printf("Error reading flag20.\n");
		exit(1);
	}
	if(fread(&flag21,sizeof flag21,1,fp)!=1){
		printf("Error reading flag21.\n");
		exit(1);
	}
	if(fread(&flag23,sizeof flag23,1,fp)!=1){
		printf("Error reading flag23.\n");
		exit(1);
	}
	if(fread(&flag25,sizeof flag25,1,fp)!=1){
		printf("Error reading flag25.\n");
		exit(1);
	}
	if(fread(&flag26,sizeof flag26,1,fp)!=1){
		printf("Error reading flag26.\n");
		exit(1);
	}
	if(fread(&flag27,sizeof flag27,1,fp)!=1){
		printf("Error reading flag27.\n");
		exit(1);
	}
	if(fread(&clag5,sizeof clag5,1,fp)!=1){
		printf("Error reading clag5.\n");
		exit(1);
	}
	if(fread(&clag6,sizeof clag6,1,fp)!=1){
		printf("Error reading clag6.\n");
		exit(1);
	}
	if(fread(&clag7,sizeof clag7,1,fp)!=1){
		printf("Error reading clag7.\n");
		exit(1);
	}
	if(fread(&clag11,sizeof clag11,1,fp)!=1){
		printf("Error reading clag11.\n");
		exit(1);
	}
	if(fread(&clag22,sizeof clag22,1,fp)!=1){
		printf("Error reading clag22.\n");
		exit(1);
	}
	if(fread(&i,sizeof i,1,fp)!=1){
		printf("Error reading i.\n");
		exit(1);
	}
	if(fread(&j,sizeof j,1,fp)!=1){
		printf("Error reading j.\n");
		exit(1);
	}
	if(fread(&k,sizeof k,1,fp)!=1){
		printf("Error reading k.\n");
		exit(1);
	}
	if(fread(&fx,sizeof fx,1,fp)!=1){
		printf("Error reading fx.\n");
		exit(1);
	}
	if(fread(&fy,sizeof fy,1,fp)!=1){
		printf("Error reading fy.\n");
		exit(1);
	}
	if(fread(&gy,sizeof gy,1,fp)!=1){
		printf("Error reading gy.\n");
		exit(1);
	}
	if(fread(&gx,sizeof gx,1,fp)!=1){
		printf("Error reading gx.\n");
		exit(1);
	}
	if(fread(&ax,sizeof ax,1,fp)!=1){
		printf("Error reading ax.\n");
		exit(1);
	}
	if(fread(&by,sizeof by,1,fp)!=1){
		printf("Error reading by.\n");
		exit(1);
	}
	if(fread(&n,sizeof n,1,fp)!=1){
		printf("Error reading n.\n");
		exit(1);
	}
	if(fread(&count1,sizeof count1,1,fp)!=1){
		printf("Error reading count1.\n");
		exit(1);
	}
	if(fread(&count2,sizeof count2,1,fp)!=1){
		printf("Error reading count2.\n");
		exit(1);
	}
	if(fread(&count3,sizeof count3,1,fp)!=1){
		printf("Error reading count3.\n");
		exit(1);
	}
	if(fread(&turn,sizeof turn,1,fp)!=1){
		printf("Error reading turn.\n");
		exit(1);
	}
	if(fread(&total1,sizeof total1,1,fp)!=1){
		printf("Error reading total1.\n");
		exit(1);
	}
	if(fread(&total2,sizeof total2,1,fp)!=1){
		printf("Error reading total2.\n");
		exit(1);
	}
	if(fread(&check1,sizeof check1,1,fp)!=1){
		printf("Error reading check1.\n");
		exit(1);
	}
	if(fread(&check2,sizeof check2,1,fp)!=1){
		printf("Error reading check2.\n");
		exit(1);
	}
	if(fread(&move,sizeof move,1,fp)!=1){
		printf("Error reading move.\n");
		exit(1);
	}
	if(fread(&h,sizeof h,1,fp)!=1){
		printf("Error reading h.\n");
		exit(1);
	}
	if(fread(&w,sizeof w,1,fp)!=1){
		printf("Error reading w.\n");
		exit(1);
	}
	if(fread(&f,sizeof f,1,fp)!=1){
		printf("Error reading f.\n");
		exit(1);
	}
	if(fread(&z,sizeof z,1,fp)!=1){
		printf("Error reading z.\n");
		exit(1);
	}
	if(fread(temp,sizeof temp,1,fp)!=1){
		printf("Error reading temp.\n");
		exit(1);
	}
	if(fread(temp1,sizeof temp1,1,fp)!=1){
		printf("Error reading temp1.\n");
		exit(1);
	}
	if(fread(back,sizeof back,1,fp)!=1){
		printf("Error reading back.\n");
		exit(1);
	}
	if(fread(tiles,sizeof tiles,1,fp)!=1){
		printf("Error reading tiles.\n");
		exit(1);
	}
	if(fread(score1,sizeof score1,1,fp)!=1){
		printf("Error reading score2.\n");
		exit(1);
	}
	if(fread(temporary,sizeof temporary,1,fp)!=1){
		printf("Error reading temporary.\n");
		exit(1);
	}
	if(fread(&g,sizeof g,1,fp)!=1){
		printf("Error reading g.\n");
		exit(1);
	}
	if(fread(str1,sizeof str1,1,fp)!=1){
		printf("Error reading str1.\n");
		exit(1);
	}
	if(fread(str2,sizeof str2,1,fp)!=1){
		printf("Error reading str2.\n");
		exit(1);
	}
	if(fread(str3,sizeof str3,1,fp)!=1){
		printf("Error reading str3.\n");
		exit(1);
	}
	if(fread(str4,sizeof str4,1,fp)!=1){
		printf("Error reading str4.\n");
		exit(1);
	}
	if(fread(str5,sizeof str5,1,fp)!=1){
		printf("Error reading str5.\n");
		exit(1);
	}
	if(fread(str6,sizeof str6,1,fp)!=1){
		printf("Error reading str6.\n");
		exit(1);
	}
	if(fread(str7,sizeof str7,1,fp)!=1){
		printf("Error reading str7.\n");
		exit(1);
	}
	if(fread(str8,sizeof str8,1,fp)!=1){
		printf("Error reading str8.\n");
		exit(1);
	}
	if(fread(arr1,sizeof arr1,1,fp)!=1){
		printf("Error reading arr1.\n");
		exit(1);
	}
	if(fread(arr2,sizeof arr2,1,fp)!=1){
		printf("Error reading arr2.\n");
		exit(1);
	}
	if(fread(arr3,sizeof arr3,1,fp)!=1){
		printf("Error reading arr3.\n");
		exit(1);
	}
	if(fread(arr4,sizeof arr4,1,fp)!=1){
		printf("Error reading arr4.\n");
		exit(1);
	}
	if(fread(arr5,sizeof arr5,1,fp)!=1){
		printf("Error reading arr5.\n");
		exit(1);
	}
	if(fread(arr7,sizeof arr7,1,fp)!=1){
		printf("Error reading arr7.\n");
		exit(1);
	}
	if(fread(arr8,sizeof arr8,1,fp)!=1){
		printf("Error reading arr8.\n");
		exit(1);
	}
	fclose(fp);
}
void GameBoard()			//Gameboard drawing
{
	int rx,ry=540,cx=59,cy=548;
	for(i=0;i<15;i++)		//Creating the board rectangles
	{
		rx=50;
		for(j=0;j<15;j++)
		{
			iSetColor(0,0,0);
			iRectangle(rx,ry,40,30);
			if((i==0&&j==0)||(i==0&&j==7)||(i==0&&j==14)||(i==7&&j==0)||(i==7&&j==14)||(i==14&&j==0)||(i==14&&j==7)||(i==14&&j==14))
			{
				iSetColor(230,50,50);
				iFilledRectangle(rx,ry,40,30);
			}
			if(((i==0||i==7||i==14)&&j==3)||((i==0||i==7||i==14)&&j==11)||((i==2||i==12)&&j==6)||((i==2||i==12)&&j==8)||((i==3||i==11)&&j==0)||((i==3||i==11)&&j==7)||((i==3||i==11)&&j==14)||((i==6||i==8)&&j==2)||((i==6||i==8)&&j==6)||((i==6||i==8)&&j==8)||((i==6||i==8)&&j==12))
			{
				iSetColor(100,150,150);
				iFilledRectangle(rx,ry,40,30);
			}
			if(((i==1||i==13)&&j==5)||((i==1||i==13)&&j==9)||((i==5||i==9)&&j==1)||((i==5||i==9)&&j==5)||((i==5||i==9)&&j==9)||((i==5||i==9)&&j==13))
			{
				iSetColor(100,100,250);
				iFilledRectangle(rx,ry,40,30);
			}
			if(((i==1||i==13)&&j==1)||((i==1||i==13)&&j==13)||((i==2||i==12)&&j==2)||((i==2||i==12)&&j==12)||((i==3||i==11)&&j==3)||((i==3||i==11)&&j==11)||((i==4||i==10)&&j==4)||((i==4||i==10)&&j==10)||(i==7&&j==7))
			{
				iSetColor(200,150,150);
				iFilledRectangle(rx,ry,40,30);
			}

			rx+=40;
		}
		ry-=30;
	}
	for(i=0;str2[i];i++)		//printing column indicators
	{
		temp[0]=str2[i];
		temp[1]='\0';
		iText(cx,575,temp,GLUT_BITMAP_TIMES_ROMAN_24);
		cx+=40;
	}
	for(i=0;str2[i];i++)		//printing row indicators
	{
		temp[0]=str2[i];
		temp[1]='\0';
		iText(25,cy,temp,GLUT_BITMAP_TIMES_ROMAN_24);
		cy-=30;
	}
}
void Checking2()				//checking the vertical word in dictionary 
{
	FILE *fp=fopen("Scrabble_dictionary.txt","r");
	int b=1;
	char line2[500];
	arr8[k]=1;
	if(fp!=NULL)
	{
	while(fgets(line2,sizeof line2,fp)!=NULL)
		{
			b=strcmp(str6,line2);
			if(b==0)
			{
				arr8[k]=0;
				break;
			}
		}
		fclose(fp);
	}
}

void Checking1()		//Checking the horizontal word in dictionary
{
	static const char filename[] = "Scrabble_dictionary.txt";
	FILE *file = fopen ( filename, "r" );
	int a=1;
	char line[500];
	arr7[k]=1;
	if ( file != NULL )
	{ 
		while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
		{
			a=strcmp(str5,line);
			if(a==0)
			{
				arr7[k]=0;
				break;
			}
		}
	fclose (file);
	}
	else
	{
		perror ( filename ); /* why didn't the file open? */
	}
}
void Firstmove()			//Validity of First move
{
	if(str4[7][7]=='0')
	{
		flag20=1;
		iSetColor(50,100,100);
		iRectangle(800,100,200,80);
		iFilledRectangle(800,100,200,80);
		iSetColor(0,0,0);
		iText(850,150,"INVALID PLACING");
		iSetColor(255,255,255);
		iRectangle(890,110,50,20);
		iFilledRectangle(890,110,50,20);
		iSetColor(0,0,0);
		iText(905,115,"OK");
		iSetColor(250,50,50);
	}
}
void Point()					//counting point of letter in bonus
{	
		if(g=='A'||g=='E'||g=='I'||g=='L'||g=='N'||g=='O'||g=='R'||g=='S'||g=='T'||g=='U')
			z=1;
		else if(g=='D'||g=='G')
			z=2;
		else if(g=='B'||g=='C'||g=='M'||g=='P')
			z=3;
		else if(g=='F'||g=='H'||g=='V'||g=='W'||g=='Y')
			z=4;
		else if(g=='K')
			z=5;
		else if(g=='J'||g=='X')
			z=8;
		else if(g=='Q'||g=='Z')
			z=10;
		else z=0;
}
void Bonus()					//counting bonus
{
	int p,t;
	w=1;
	f=0;
	z=0;
	for(i=0;i<h;i++)
	{
		p=arr3[i];
		t=arr4[i];
		g=str4[p][t];
		if(((p==0||p==7||p==14)&&t==3)||((p==0||p==7||p==14)&&t==11)||((p==2||p==12)&&t==6)||((p==2||p==12)&&t==8)||((p==3||p==11)&&t==0)||((p==3||p==11)&&t==7)||((p==3||p==11)&&t==14)||((p==6||p==8)&&t==2)||((p==6||p==8)&&t==6)||((p==6||p==8)&&t==8)||((p==6||p==8)&&t==12))
		{
			Point();
			f=f+z;
		}
		if(((p==1||p==13)&&t==5)||((p==1||p==13)&&t==9)||((p==5||p==9)&&t==1)||((p==5||p==9)&&t==5)||((p==5||p==9)&&t==9)||((p==5||p==9)&&t==13))
		{
			Point();
			f=f+(2*z);
		}
		if((p==0&&t==0)||(p==0&&t==7)||(p==0&&t==14)||(p==7&&t==0)||(p==7&&t==14)||(p==14&&t==0)||(p==14&&t==7)||(p==14&&t==14))
			w=w*3;
		if(((p==1||p==13)&&t==1)||((p==1||p==13)&&t==13)||((p==2||p==12)&&t==2)||((p==2||p==12)&&t==12)||((p==3||p==11)&&t==3)||((p==3||p==11)&&t==11)||((p==4||p==10)&&t==4)||((p==4||p==10)&&t==10)||(p==7&&t==7))
			w=w*2;
	}
}
void Scoreboard1()				//Calculating the score of player1
{
	if(check1==0&&check2==0)
	{
		Bonus();
		total1+=(count2+f)*w;
	}
}
void Scoreboard2()				//calculating the score of Player2
{
	if(check1==0&&check2==0)
	{
		Bonus();
		total2+=(count3+f)*w;
	}
}
void Display()		//Displaying the tiles in Gameboard
{
	if(flag20==0)
		for(i=0,j=0;i < move ; i++)
		{
			if(temp1[i]!=' ')
			{
				back[j]=temp1[i];
				j++;
			}
			temporary[0]=temp1[i];
			temporary[1]='\0';
			iSetColor(0,0,0);
			iText(arr1[i],arr2[i],temporary,GLUT_BITMAP_TIMES_ROMAN_24);
		}

}
void a()						//counting player1 score
{
	char h;
	for(i=0;str5[i];i++)
	{
		h=str5[i];
		if(h=='A'||h=='E'||h=='I'||h=='L'||h=='N'||h=='O'||h=='R'||h=='S'||h=='T'||h=='U')
			count2+=1;
		else if(h=='D'||h=='G')
			count2+=2;
		else if(h=='B'||h=='C'||h=='M'||h=='P')
			count2+=3;
		else if(h=='F'||h=='H'||h=='V'||h=='W'||h=='Y')
			count2+=4;
		else if(h=='K')
			count2+=5;
		else if(h=='J'||h=='X')
			count2+=8;
		else if(h=='Q'||h=='Z')
			count2+=10;
	}

}
void b()						//counting player1 score
{
	char h;
	for(i=0;str6[i];i++)
	{
		h=str6[i];
		if(h=='A'||h=='E'||h=='I'||h=='L'||h=='N'||h=='O'||h=='R'||h=='S'||h=='T'||h=='U')
			count2+=1;
		else if(h=='D'||h=='G')
			count2+=2;
		else if(h=='B'||h=='C'||h=='M'||h=='P')
			count2+=3;
		else if(h=='F'||h=='H'||h=='V'||h=='W'||h=='Y')
			count2+=4;
		else if(h=='K')
			count2+=5;
		else if(h=='J'||h=='X')
			count2+=8;
		else if(h=='Q'||h=='Z')
			count2+=10;
	}
}
void Counting()				//Checking Player1 placing 
{
	int l,m,x,y,cn,dn;
	check1=0;
	check2=0;
	count2=0;
	for(k=0;k<h;k++)
	{
		cn=arr3[k]+1;
		dn=arr4[k]+1;
	for(i=cn-1,l=i;str4[i][dn-1]!='0' && str4[i][dn-1]!='\0';i--)
	{
		l=i;
	}
	for(i=cn-1,m=i;str4[i][dn-1]!='0' && str4[i][dn-1]!='\0';i++)
	{
		m=i;
	}
	
	for(j=dn-1,x=j;str4[cn-1][j]!='0' && str4[cn-1][j]!='\0';j--)
	{
		x=j;
	}
	for(j=dn-1,y=j;str4[cn-1][j]!='0' && str4[cn-1][j]!='\0';j++)
	{
		y=j;
	}
	if(l==m&&x==y)
	{
		arr7[k]=1;
		arr8[k]=1;
	}
	else
	{
		if(l==m&&x!=y)
		{
			for(i=0,j=x;j<=y;j++,i++)
			{
				str5[i]=str4[cn-1][j];
			}
			str5[i]='\n';
			str5[i+1]='\0';
			Checking1();
			if(arr7[k]==0&&k==(h-1))
				a();
			arr8[k]=0;
		}
		if(l!=m&&x==y)
		{
			for(j=0,i=l;i<=m;j++,i++)
			{
				str6[j]=str4[i][dn-1];
			}
			str6[j]='\n';
			str6[j+1]='\0';
			Checking2();
			if(arr8[k]==0&&k==(h-1))
				b();
			arr7[k]=0;
		}
		if(l!=m&&x!=y)
		{
			for(i=0,j=x;j<=y;j++,i++)
			{
				str5[i]=str4[cn-1][j];
			}
			str5[i]='\n';
			str5[i+1]='\0';
			Checking1();
			for(j=0,i=l;i<=m;j++,i++)
			{
				str6[j]=str4[i][dn-1];
			}
			str6[j]='\n';
			str6[j+1]='\0';
			Checking2();
			if(arr7[k]==0&&arr8[k]==0&&k==(h-1))
			{
				a();
				b();
			}
		}
	}
	}
	for(i=0;i<h;i++)
	{
		if(arr7[i]==1)
			check1=1;
		if(arr8[i]==1)
			check2=1;
	}
	Scoreboard1();
}
void Validmove()					//Validity of move
{
	if(check1!=0||check2!=0)
	{
		flag21=1;
		iSetColor(50,100,100);
		iRectangle(700,200,200,80);
		iFilledRectangle(700,200,200,80);
		iSetColor(0,0,0);
		iText(750,250,"Not in Dictionary");
		iSetColor(255,255,255);
		iRectangle(790,210,50,20);
		iFilledRectangle(790,210,50,20);
		iSetColor(0,0,0);
		iText(805,215,"OK");
		iSetColor(250,50,50);
	}
}
void Move()					//Player1 Tiles moving
{
	if(turn%2==0)
		if(!flag16)
		{
			if(str4[flag6-1][flag7-1]=='0')
			{
				str4[flag6-1][flag7-1]=str1[flag5-1];
				str8[h]=str1[flag5-1];
				temp1[move-1]=str1[flag5-1];
				str1[flag5-1]=' ';
				arr1[move-1]=59+(flag7-1)*40;
				arr2[move-1]=547-(flag6-1)*30;
				arr3[h]=flag6-1;
				arr4[h]=flag7-1;
				arr5[h]=move-1;
				flag16++;
				h++;
			}
		}		
}
void Back1()				//Back elements in player1 rack for Validmove
{
	if(flag25==0)
	{
		for(i=0;i<h;i++)
		{
			str4[arr3[i]][arr4[i]]='0';
			temp1[arr5[i]]=' ';
		}
		for(i=0,j=0;j<h;i++)
		{
			if(str1[i]==' ')
			{
				str1[i]=str8[j];
				j++;
			}
		}
		flag25++;
	}
}
void Gameover()
{
	for(i=0,k=0;str1[i];i++)
	{
		if(str1[i]!=' ')
		{
			k=1;
			break;
		}
	}
	if(k==0)
		flag9=4;
	for(i=0,k=0;str7[i];i++)
	{
		if(str7[i]!=' ')
		{
			k=1;
			break;
		}
	}
	if(k==0)
		flag9=4;

}	
void Playerrack()				//Controlling Player1
{
	int tx=59,b;
	iSetColor(0,0,0);
	for(i=50;i<650;i+=40)
		iRectangle(i,20,40,30);
	iSetColor(50,250,50);
	iText(280,60,"Player1 Tiles Rack",GLUT_BITMAP_HELVETICA_18);
	iSetColor(50,50,250);
	iRectangle(680,20,100,40);
	iRectangle(790,20,130,40);
	iRectangle(930,20,100,40);
	iSetColor(250,50,50);
	iText(695,35,"PLACE",GLUT_BITMAP_HELVETICA_18);
	iText(800,35,"EXCHANGE",GLUT_BITMAP_HELVETICA_18);
	iText(950,35,"PASS",GLUT_BITMAP_HELVETICA_18);
	if(flag5)			//Filling gaps
	{
		iSetColor(10,240,10);
		iFilledRectangle(50+(flag5-1)*40,20,40,30);
		if(flag6&&flag7)
			if(flag20==0&&flag21==0)
			{
				iSetColor(20,100,50);
				iFilledRectangle(50+(flag7-1)*40,540-(flag6-1)*30,40,30);
				Move();
			}
		if(flag8)
		{
			if(flag21==0)
			Firstmove();
			if(!flag14)
			{
				if(flag20==0)
				{
					Counting();
					Validmove();
					if(flag21==0)
					{
						srand(time(NULL));
						for(i=0;str1[i];)			//filling player1 rack in placing
						{
							for(j=0,k=0;str3[j];j++)
							{
								if(str3[j]!='0')
								{
									k=1;
									break;
								}
							}
							if(k==1)
							{
								b=rand()%100;
								if(str3[b]!='0')
								{
									if(str1[i]==' ')
									{
										str1[i]=str3[b];
										str3[b]='0';
									}
									i++;
								}
							}
							else break;
						}
						flag14++;
						flag8=0;
						turn++;
						h=0;
						flag5=0;
						flag6=0;
						flag7=0;
					}
					if(flag21==1)
						Back1();
					Gameover();
				}
				if(flag20==1)				//back elements in player1 rack for firstmove
				{
					for(i=0,j=0;str1[j];j++)
						if(str1[j]==' ')
						{
							str1[j]=back[i];
							i++;
						}
						for(i=0;i<15;i++)
						{	
							for(j=0;j<15;j++)
								str4[i][j]='0';
							str4[i][j]='\0';
						}
						for(i=0 ;i<move ; i++)
						{
							temp1[i]=' ';
						}
						flag14++;
				}
			}
		}
	}
	iSetColor(250,50,50);
	for(i=0;str1[i];i++)	//printing elements of str1 in the player1 rack
	{
		temp[0]=str1[i];
		temp[1]='\0';
		iText(tx,27,temp,GLUT_BITMAP_TIMES_ROMAN_24);
		tx+=40;
	}
}
void c()					//counting score player2
{
	char l;
	for(i=0;str5[i];i++)
	{
		l=str5[i];
		if(l=='A'||l=='E'||l=='I'||l=='L'||l=='N'||l=='O'||l=='R'||l=='S'||l=='T'||l=='U')
			count3+=1;
		else if(l=='D'||l=='G')
			count3+=2;
		else if(l=='B'||l=='C'||l=='M'||l=='P')
			count3+=3;
		else if(l=='F'||l=='H'||l=='V'||l=='W'||l=='Y')
			count3+=4;
		else if(l=='K')
			count3+=5;
		else if(l=='J'||l=='X')
			count3+=8;
		else if(l=='Q'||l=='Z')
			count3+=10;
	}
}
void d()				//counting score player2
{
	char l;
	for(i=0;str6[i];i++)
	{
		l=str6[i];
		if(l=='A'||l=='E'||l=='I'||l=='L'||l=='N'||l=='O'||l=='R'||l=='S'||l=='T'||l=='U')
			count3+=1;
		else if(l=='D'||l=='G')
			count3+=2;
		else if(l=='B'||l=='C'||l=='M'||l=='P')
			count3+=3;
		else if(l=='F'||l=='H'||l=='V'||l=='W'||l=='Y')
			count3+=4;
		else if(l=='K')
			count3+=5;
		else if(l=='J'||l=='X')
			count3+=8;
		else if(l=='Q'||l=='Z')
			count3+=10;
	}
}
void Counting2()				//Checking Player2 placing 
{
	int l,m,x,y,an,bn;
	check1=0;
	check2=0;
	count3=0;
	for(k=0;k<h;k++)
	{
		an=arr3[k]+1;
		bn=arr4[k]+1;
	for(i=an-1,l=i;str4[i][bn-1]!='0' && str4[i][bn-1]!='\0';i--)
	{
		l=i;
	}
	for(i=an-1,m=i;str4[i][bn-1]!='0' && str4[i][bn-1]!='\0';i++)
	{
		m=i;
	}
	
	for(j=bn-1,x=j;str4[an-1][j]!='0' && str4[an-1][j]!='\0';j--)
	{
		x=j;
	}
	for(j=bn-1,y=j;str4[an-1][j]!='0' && str4[an-1][j]!='\0';j++)
	{
		y=j;
	}
	if(l==m&&x==y)
	{
		arr7[k]=1;
		arr8[k]=1;
	}
	else
	{
		if(l==m&&x!=y)
		{
			for(i=0,j=x;j<=y;j++,i++)
			{
				str5[i]=str4[an-1][j];
			}
			str5[i]='\n';
			str5[i+1]='\0';
			Checking1();
			if(arr7[k]==0&&k==(h-1))
				c();
			arr8[k]=0;
		}
		if(l!=m&&x==y)
		{
			for(j=0,i=l;i<=m;j++,i++)
			{
				str6[j]=str4[i][bn-1];
			}
			str6[j]='\n';
			str6[j+1]='\0';
			Checking2();
			if(arr8[k]==0&&k==(h-1))
				d();
			arr7[k]=0;
		}
		if(l!=m&&x!=y)
		{
			for(i=0,j=x;j<=y;j++,i++)
			{
				str5[i]=str4[an-1][j];
			}
			str5[i]='\n';
			str5[i+1]='\0';
			Checking1();
			for(j=0,i=l;i<=m;j++,i++)
			{
				str6[j]=str4[i][bn-1];
			}
			str6[j]='\n';
			str6[j+1]='\0';
			Checking2();
			if(arr7[k]==0&&arr8[k]==0&&k==(h-1))
			{
				c();
				d();
			}
		}
	}
	}
	for(i=0;i<h;i++)
	{
		if(arr7[i]==1)
			check1=1;
		if(arr8[i]==1)
			check2=1;
	}
	Scoreboard2();
}
void Move2()					//Player2 Tiles moving
{
	if(turn%2==1)
		if(!flag16&&!flag26)
		{
			if(str4[clag6-1][clag7-1]=='0')
			{
				str4[clag6-1][clag7-1]=str7[clag5-1];
				str8[h]=str7[clag5-1];
				temp1[move-1]=str7[clag5-1];
				str7[clag5-1]=' ';
				arr1[move-1]=ax+9;
				arr2[move-1]=by+7;
				arr3[h]=clag6-1;
				arr4[h]=clag7-1;
				arr5[h]=move-1;
				flag16++;
				h++;
			}
		}
}
void Back2()				//Back elements in player2 rack for validmove
{
	if(flag25==0)
	{
		for(i=0;i<h;i++)
		{
			str4[arr3[i]][arr4[i]]='0';
			temp1[arr5[i]]=' ';
		}
		for(i=0,j=0;j<h;i++)
		{
			if(str7[i]==' ')
			{
				str7[i]=str8[j];
				j++;
			}
		}
		flag25++;
	}
}
void Playerrack2()			//controlling player2
{
	int tx=59,b;
	iSetColor(0,0,0);
	for(i=50;i<650;i+=40)
		iRectangle(i,20,40,30);
	iSetColor(50,250,50);
	iText(280,60,"Player2 Tiles Rack",GLUT_BITMAP_HELVETICA_18);
	iSetColor(50,50,250);
	iRectangle(680,20,100,40);
	iRectangle(790,20,130,40);
	iRectangle(930,20,100,40);
	iSetColor(250,50,50);
	iText(695,35,"PLACE",GLUT_BITMAP_HELVETICA_18);
	iText(800,35,"EXCHANGE",GLUT_BITMAP_HELVETICA_18);
	iText(950,35,"PASS",GLUT_BITMAP_HELVETICA_18);
	iSetColor(20,100,50);
	iFilledRectangle(ax,by,40,30);
	if(clag5>0&&clag5<16)
	{							//Filling gaps
		if(clag6&&clag7)
			if(flag20==0&&flag21==0)
			{
				Move2();
			}
		if(flag8)
		{
			if(flag21==0)
				Firstmove();
			if(!flag14)
			{
				if(flag20==0)
				{
					Counting2();
					Validmove();
					if(flag21==0)
					{
						srand(time(NULL));
						for(i=0;str7[i];)				//Filling player2 rack in placing
						{
							for(j=0,k=0;str3[j];j++)
							{
								if(str3[j]!='0')
								{
								k=1;
								break;
								}
							}
							if(k==1)
							{
								b=rand()%100;
								if(str3[b]!='0')
								{
									if(str7[i]==' ')
									{
										str7[i]=str3[b];
										str3[b]='0';
									}
									i++;
								}
							}
							else break;
						}
						flag14++;
						flag8=0;
						turn++;
						h=0;
						clag5=0;
						clag6=0;
						clag7=0;
					}
					if(flag21==1)
						Back2();
					Gameover();
				}
				if(flag20==1)		//back elements in player2 rack for Firstmove
				{
					for(i=0,j=0;str7[j]!='\0';j++)
						if(str7[j]==' ')
						{
							str7[j]=back[i];
							i++;
						}
						for(i=0;i<15;i++)
						{	
							for(j=0;j<15;j++)
							str4[i][j]='0';
							str4[i][j]='\0';
						}
						for(i=0 ;i<move ; i++)
						{
							temp1[i]=' ';
						}
						flag14++;
				}
			}
		}
	}
	iSetColor(250,50,50);
	for(i=0;str7[i];i++)	//printing elements of str7 in the player2 rack
	{
		temp[0]=str7[i];
		temp[1]='\0';
		iText(tx,27,temp,GLUT_BITMAP_TIMES_ROMAN_24);
		tx+=40;
	}
}
void Score()		//Printing the score in scoreboard
{
	iSetColor(50,50,250);
	iText(730,600,"Score:",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(250,50,50);
	iText(750,570,"Player1- MOUSE",GLUT_BITMAP_HELVETICA_18);
	iText(750,540,"Player2- KEYBOARD",GLUT_BITMAP_HELVETICA_18);
	iRectangle(935,565,80,25);
	iRectangle(935,535,80,25);
	iSetColor(50,50,250);
	iText(740,480,"CURRENT PLACING",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(740,410,"TILES REMAINING",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(250,50,50);
	iRectangle(770,440,130,30);
	iRectangle(800,375,80,25);
	if(turn%2)
		iText(795,448,"Player2",GLUT_BITMAP_TIMES_ROMAN_24);
	else iText(795,448,"Player1",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(970,572,score1);
	sprintf(score1,"%d",total1,GLUT_BITMAP_TIMES_ROMAN_24);
	iText(970,542,score2);
	sprintf(score2,"%d",total2,GLUT_BITMAP_TIMES_ROMAN_24);

}
void Tiles()		//Printing the remain tiles
{
	count1=0;
	for(i=0;str3[i]!='\0';i++)
	{
		if(str3[i]!='0')
			count1++;
	}
	iText(840,385,tiles);
	sprintf(tiles,"%d",count1,GLUT_BITMAP_TIMES_ROMAN_24);
}
void Manual()				//Instructions
{
	iSetColor(255,255,255);
	iRectangle(0,0,1100,650);
	iFilledRectangle(0,0,1100,650);
	iSetColor(100,80,70);
	iRectangle(500,120,70,30);
	iFilledRectangle(500,120,70,30);
	iSetColor(50,150,50);
	iText(520,127,"OK",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(250,615,"Controlling options",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(250,50,50);
	iText(150,570,"Player1:  Mouse Left Button",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(150,530,"Player2:  Keyboard",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,505,"Moving:   Arrow Keys, Typing Tiles",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,480,"Placing:   Enter Key",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,455,"Exchange:   PageUp Key",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,430,"Pass:   PageDown Key",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,405,"'Ok' in 'Invalid placing':   Backspace Key",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,380,"'Ok' in 'Not in dictionary':   Enter Key",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,355,"'Ok' in 'Winner' or 'Game is Draw':   Enter Key",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(200,330,"Back from Game:   End Key",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(50,250,50);
	iText(130,165,"For details see the 'Read_Me' file",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(230,50,50);
	iRectangle(150,290,50,20);
	iFilledRectangle(150,290,50,20);
	iText(230,294,"Triple Word score",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(200,150,150);
	iRectangle(150,260,50,20);
	iFilledRectangle(150,260,50,20);
	iText(230,264,"Double Word score",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(100,100,250);
	iRectangle(150,230,50,20);
	iFilledRectangle(150,230,50,20);
	iText(230,234,"Triple Letter score",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(100,150,150);
	iRectangle(150,200,50,20);
	iFilledRectangle(150,200,50,20);
	iText(230,204,"Double Letter score",GLUT_BITMAP_TIMES_ROMAN_24);


}
void save()				//save the current game
{
	FILE *fp;

	if((fp=fopen("Scrabble.txt","wb"))==NULL){
		printf("Cannot open file.\n");
		exit(1);
	}
	if(fwrite(&flag1,sizeof flag1,1,fp)!=1){
		printf("Error writing flag1.\n");
		exit(1);
	}
	if(fwrite(&flag3,sizeof flag3,1,fp)!=1){
		printf("Error writing flag3.\n");
		exit(1);
	}
	if(fwrite(&flag5,sizeof flag5,1,fp)!=1){
		printf("Error writing flag5.\n");
		exit(1);
	}
	if(fwrite(&flag6,sizeof flag6,1,fp)!=1){
		printf("Error writing flag6.\n");
		exit(1);
	}
	if(fwrite(&flag7,sizeof flag7,1,fp)!=1){
		printf("Error writing flag7.\n");
		exit(1);
	}
	if(fwrite(&flag8,sizeof flag8,1,fp)!=1){
		printf("Error writing flag8.\n");
		exit(1);
	}
	if(fwrite(&flag9,sizeof flag9,1,fp)!=1){
		printf("Error writing flag9.\n");
		exit(1);
	}
	if(fwrite(&flag10,sizeof flag10,1,fp)!=1){
		printf("Error writing flag10.\n");
		exit(1);
	}
	if(fwrite(&flag11,sizeof flag11,1,fp)!=1){
		printf("Error writing flag11.\n");
		exit(1);
	}
	if(fwrite(&flag12,sizeof flag12,1,fp)!=1){
		printf("Error writing flag12.\n");
		exit(1);
	}
	if(fwrite(&flag13,sizeof flag13,1,fp)!=1){
		printf("Error writing flag13.\n");
		exit(1);
	}
	if(fwrite(&flag14,sizeof flag14,1,fp)!=1){
		printf("Error writing flag14.\n");
		exit(1);
	}
	if(fwrite(&flag16,sizeof flag16,1,fp)!=1){
		printf("Error writing flag16.\n");
		exit(1);
	}
	if(fwrite(&flag20,sizeof flag20,1,fp)!=1){
		printf("Error writing flag17.\n");
		exit(1);
	}
	if(fwrite(&flag20,sizeof flag20,1,fp)!=1){
		printf("Error writing flag20.\n");
		exit(1);
	}
	if(fwrite(&flag21,sizeof flag21,1,fp)!=1){
		printf("Error writing flag21.\n");
		exit(1);
	}
	if(fwrite(&flag23,sizeof flag23,1,fp)!=1){
		printf("Error writing flag23.\n");
		exit(1);
	}
	if(fwrite(&flag25,sizeof flag25,1,fp)!=1){
		printf("Error writing flag25.\n");
		exit(1);
	}
	if(fwrite(&flag26,sizeof flag26,1,fp)!=1){
		printf("Error writing flag26.\n");
		exit(1);
	}
	if(fwrite(&flag27,sizeof flag27,1,fp)!=1){
		printf("Error writing flag27.\n");
		exit(1);
	}
	if(fwrite(&clag5,sizeof clag5,1,fp)!=1){
		printf("Error writing clag5.\n");
		exit(1);
	}
	if(fwrite(&clag6,sizeof clag6,1,fp)!=1){
		printf("Error writing clag6.\n");
		exit(1);
	}
	if(fwrite(&clag7,sizeof clag7,1,fp)!=1){
		printf("Error writing clag7.\n");
		exit(1);
	}
	if(fwrite(&clag11,sizeof clag11,1,fp)!=1){
		printf("Error writing clag11.\n");
		exit(1);
	}
	if(fwrite(&clag22,sizeof clag22,1,fp)!=1){
		printf("Error writing clag22.\n");
		exit(1);
	}
	if(fwrite(&i,sizeof i,1,fp)!=1){
		printf("Error writing i.\n");
		exit(1);
	}
	if(fwrite(&j,sizeof j,1,fp)!=1){
		printf("Error writing j.\n");
		exit(1);
	}
	if(fwrite(&k,sizeof k,1,fp)!=1){
		printf("Error writing k.\n");
		exit(1);
	}
	if(fwrite(&fx,sizeof fx,1,fp)!=1){
		printf("Error writing fx.\n");
		exit(1);
	}
	if(fwrite(&fy,sizeof fy,1,fp)!=1){
		printf("Error writing fy.\n");
		exit(1);
	}
	if(fwrite(&gy,sizeof gy,1,fp)!=1){
		printf("Error writing gy.\n");
		exit(1);
	}
	if(fwrite(&gx,sizeof gx,1,fp)!=1){
		printf("Error writing gx.\n");
		exit(1);
	}
	if(fwrite(&ax,sizeof ax,1,fp)!=1){
		printf("Error writing ax.\n");
		exit(1);
	}
	if(fwrite(&by,sizeof by,1,fp)!=1){
		printf("Error writing by.\n");
		exit(1);
	}
	if(fwrite(&n,sizeof n,1,fp)!=1){
		printf("Error writing n.\n");
		exit(1);
	}
	if(fwrite(&count1,sizeof count1,1,fp)!=1){
		printf("Error writing count1.\n");
		exit(1);
	}
	if(fwrite(&count2,sizeof count2,1,fp)!=1){
		printf("Error writing count2.\n");
		exit(1);
	}
	if(fwrite(&count3,sizeof count3,1,fp)!=1){
		printf("Error writing count3.\n");
		exit(1);
	}
	if(fwrite(&turn,sizeof turn,1,fp)!=1){
		printf("Error writing turn.\n");
		exit(1);
	}
	if(fwrite(&total1,sizeof total1,1,fp)!=1){
		printf("Error writing total1.\n");
		exit(1);
	}
	if(fwrite(&total2,sizeof total2,1,fp)!=1){
		printf("Error writing total2.\n");
		exit(1);
	}
	if(fwrite(&check1,sizeof check1,1,fp)!=1){
		printf("Error writing check1.\n");
		exit(1);
	}
	if(fwrite(&check2,sizeof check2,1,fp)!=1){
		printf("Error writing check2.\n");
		exit(1);
	}
	if(fwrite(&move,sizeof move,1,fp)!=1){
		printf("Error writing move.\n");
		exit(1);
	}
	if(fwrite(&h,sizeof h,1,fp)!=1){
		printf("Error writing h.\n");
		exit(1);
	}
	if(fwrite(&w,sizeof w,1,fp)!=1){
		printf("Error writing w.\n");
		exit(1);
	}
	if(fwrite(&f,sizeof f,1,fp)!=1){
		printf("Error writing f.\n");
		exit(1);
	}
	if(fwrite(&z,sizeof z,1,fp)!=1){
		printf("Error writing z.\n");
		exit(1);
	}
	if(fwrite(temp,sizeof temp,1,fp)!=1){
		printf("Error writing temp.\n");
		exit(1);
	}
	if(fwrite(temp1,sizeof temp1,1,fp)!=1){
		printf("Error writing temp1.\n");
		exit(1);
	}
	if(fwrite(back,sizeof back,1,fp)!=1){
		printf("Error writing back.\n");
		exit(1);
	}
	if(fwrite(tiles,sizeof tiles,1,fp)!=1){
		printf("Error writing tiles.\n");
		exit(1);
	}
	if(fwrite(score1,sizeof score1,1,fp)!=1){
		printf("Error writing score2.\n");
		exit(1);
	}
	if(fwrite(temporary,sizeof temporary,1,fp)!=1){
		printf("Error writing temporary.\n");
		exit(1);
	}
	if(fwrite(&g,sizeof g,1,fp)!=1){
		printf("Error writing g.\n");
		exit(1);
	}
	if(fwrite(str1,sizeof str1,1,fp)!=1){
		printf("Error writing str1.\n");
		exit(1);
	}
	if(fwrite(str2,sizeof str2,1,fp)!=1){
		printf("Error writing str2.\n");
		exit(1);
	}
	if(fwrite(str3,sizeof str3,1,fp)!=1){
		printf("Error writing str3.\n");
		exit(1);
	}
	if(fwrite(str4,sizeof str4,1,fp)!=1){
		printf("Error writing str4.\n");
		exit(1);
	}
	if(fwrite(str5,sizeof str5,1,fp)!=1){
		printf("Error writing str5.\n");
		exit(1);
	}
	if(fwrite(str6,sizeof str6,1,fp)!=1){
		printf("Error writing str6.\n");
		exit(1);
	}
	if(fwrite(str7,sizeof str7,1,fp)!=1){
		printf("Error writing str7.\n");
		exit(1);
	}
	if(fwrite(str8,sizeof str8,1,fp)!=1){
		printf("Error writing str8.\n");
		exit(1);
	}
	if(fwrite(arr1,sizeof arr1,1,fp)!=1){
		printf("Error writing arr1.\n");
		exit(1);
	}
	if(fwrite(arr2,sizeof arr2,1,fp)!=1){
		printf("Error writing arr2.\n");
		exit(1);
	}
	if(fwrite(arr3,sizeof arr3,1,fp)!=1){
		printf("Error writing arr3.\n");
		exit(1);
	}
	if(fwrite(arr4,sizeof arr4,1,fp)!=1){
		printf("Error writing arr4.\n");
		exit(1);
	}
	if(fwrite(arr5,sizeof arr5,1,fp)!=1){
		printf("Error writing arr5.\n");
		exit(1);
	}
	if(fwrite(arr7,sizeof arr7,1,fp)!=1){
		printf("Error writing arr7.\n");
		exit(1);
	}
	if(fwrite(arr8,sizeof arr8,1,fp)!=1){
		printf("Error writing arr8.\n");
		exit(1);
	}
	fclose(fp);
}
void Finalcheck()						//checking the remaining tiles in rack finally
{
	char q;
	int fn=0,qn=0;
	if(flag23==0)
	{
		for(i=0;str1[i];i++)
		{
			q=str1[i];
			if(q!=' ')
				fn=1;
			if(q=='A'||q=='E'||q=='I'||q=='L'||q=='N'||q=='O'||q=='R'||q=='S'||q=='T'||q=='U')
				total1-=1;
			else if(q=='D'||q=='G')
				total1-=2;
			else if(q=='B'||q=='C'||q=='M'||q=='P')
				total1-=3;
			else if(q=='F'||q=='H'||q=='V'||q=='W'||q=='Y')
				total1-=4;
			else if(q=='K')
				total1-=5;
			else if(q=='J'||q=='X')
				total1-=8;
			else if(q=='Q'||q=='Z')
				total1-=10;
		}
		if(fn==0)
			for(i=0;str7[i];i++)
			{
				q=str7[i];
				if(q=='A'||q=='E'||q=='I'||q=='L'||q=='N'||q=='O'||q=='R'||q=='S'||q=='T'||q=='U')
					total1+=1;
				else if(q=='D'||q=='G')
					total1+=2;
				else if(q=='B'||q=='C'||q=='M'||q=='P')
					total1+=3;
				else if(q=='F'||q=='H'||q=='V'||q=='W'||q=='Y')
					total1+=4;
				else if(q=='K')
					total1+=5;
				else if(q=='J'||q=='X')
					total1+=8;
				else if(q=='Q'||q=='Z')
					total1+=10;
			}
		for(i=0;str7[i];i++)
		{
			q=str7[i];
			if(q!=' ')
				qn=1;
			if(q=='A'||q=='E'||q=='I'||q=='L'||q=='N'||q=='O'||q=='R'||q=='S'||q=='T'||q=='U')
				total2-=1;
			else if(q=='D'||q=='G')
				total2-=2;
			else if(q=='B'||q=='C'||q=='M'||q=='P')
				total2-=3;
			else if(q=='F'||q=='H'||q=='V'||q=='W'||q=='Y')
				total2-=4;
			else if(q=='K')
				total2-=5;
			else if(q=='J'||q=='X')
				total2-=8;
			else if(q=='Q'||q=='Z')
				total2-=10;
		}
		if(qn==0)
			for(i=0;str1[i];i++)
			{
				q=str1[i];
				if(q=='A'||q=='E'||q=='I'||q=='L'||q=='N'||q=='O'||q=='R'||q=='S'||q=='T'||q=='U')
					total2+=1;
				else if(q=='D'||q=='G')
					total2+=2;
				else if(q=='B'||q=='C'||q=='M'||q=='P')
					total2+=3;
				else if(q=='F'||q=='H'||q=='V'||q=='W'||q=='Y')
					total2+=4;
				else if(q=='K')
					total2+=5;
				else if(q=='J'||q=='X')
					total2+=8;
				else if(q=='Q'||q=='Z')
					total2+=10;
			}
		flag23++;
	}
}
void New()						//new game after back from current game
{
	ax=330;
	by=330;
	flag1=0;
	clag5=0;
	clag6=0;
	clag7=0;
	flag3=0;
	flag4=0;
	flag11=0;
	clag11=0;
	flag6=0;
	flag7=0;
	flag5=0;
	flag8=0;
	flag12=0;
	flag13=0;
	flag14=0;
	flag16=0;
	flag20=0;
	turn=2;
	count1=0;
	total1=0;
	total2=0;
	move=0;
	h=0;
	flag9=0;
	flag10=0;
	flag23=0;
}
void Placing()				//placing tiles in players' rack
{
	int a;
	if(flag11==0) //Placing random elements in str1
	{
		srand(time(NULL));
		for(flag12=0;flag12<15;)
		{
			a=rand()%100;
			if(str3[a]!='0')
			{
				str1[flag12]=str3[a];
				str3[a]='0';
				flag12++;
			}
		}
		str1[flag12]='\0';
		flag11++;
	}
	if(clag11==0)         //Placing random elements in str7
	{
		srand(time(NULL));
		for(flag12=0;flag12<15;)
		{
			a=rand()%100;
			if(str3[a]!='0')
			{
				str7[flag12]=str3[a];
				str3[a]='0';
				flag12++;
			}
		}
		str7[flag12]='\0';
		clag11++;
	}
}
void NewBoard()			//controlling the second screen
{
	Placing();
	if(flag9!=4)
	{
		iClear();
		iSetColor(255,255,255);
		iRectangle(0,0,1100,650);
		iFilledRectangle(0,0,1100,650);
		iSetColor(50,50,200);
		iEllipse(45,630,40,15);
		iFilledEllipse(45,630,40,15);
		iSetColor(50,250,50);
		iText(23,625,"OPTION",GLUT_BITMAP_HELVETICA_12);
		GameBoard();
		if(turn%2==0)
			Playerrack();
		Score();
		if(turn%2)
			Playerrack2();
		Tiles();
		Display();
		if(flag4==1)
		{
			iSetColor(50,50,250);
			iEllipse(45,597,40,15);
			iFilledEllipse(45,597,40,15);
			iEllipse(45,565,40,15);
			iFilledEllipse(45,565,40,15);
			iSetColor(50,250,50);
			iText(27,592,"SAVE",GLUT_BITMAP_HELVETICA_12);
			iText(27,560,"BACK",GLUT_BITMAP_HELVETICA_12);
		}
	}
	else if(flag9==4)
	{
		iClear();
		iSetColor(150,150,150);
		iRectangle(0,0,1100,650);
		iFilledRectangle(0,0,1100,650);
		iSetColor(250,250,250);
		iRectangle(400,200,300,200);
		iFilledRectangle(400,200,300,200);
		Finalcheck();
		if(total1==total2)
		{
			iSetColor(100,255,100);
			iText(450,360,"GAME IS DRAW!",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		else
		{
			iSetColor(100,255,100);
			iText(450,360,"WINNER :",GLUT_BITMAP_TIMES_ROMAN_24);
		if(total1>total2)
		{
			iSetColor(250,50,50);
			iText(570,360,"PLAYER-1",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(total2>total1)
		{
			iSetColor(250,50,50);
			iText(570,360,"PLAYER-2",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		}
		iSetColor(150,150,150);
		iText(450,310,"PLAYER-1 :",GLUT_BITMAP_HELVETICA_12);
		iText(450,270,"PLAYER-2 :",GLUT_BITMAP_HELVETICA_12);
		iText(550,310,score1);
		sprintf(score1,"%d",total1);
		iText(550,270,score2);
		sprintf(score2,"%d",total2);
		iSetColor(100,80,70);
		iRectangle(500,215,50,25);
		iFilledRectangle(500,215,50,25);
		iSetColor(50,250,50);
		iText(508,220,"OK",GLUT_BITMAP_TIMES_ROMAN_24);
		flag10=1;
	}
}
void iDraw()
{
	if(flag1==0&&flag3==0)
	{
		FirstScreen();
	}
	if(flag1==1)
	{
		NewBoard();
	}
	if(flag3==1)
	{
		Manual();
	}
}

void iMouseMove(int mx, int my)
{
}
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(flag1==0&&flag3==0)
		{
			if(mx >=460 && mx <=640  && my >= 480 && my <=520)	//New game
			{
				flag1=1;
			}
			if(mx >=460 && mx <=640  && my >= 390 && my <=430)	//Load game
			{
				LoadGame();
				flag27=1;
			}
			if(mx >=460 && mx <=640  && my >= 300 && my <=340)	//Controll
			{
				flag3=1;
			}
			if(mx >=460 && mx <=640  && my >= 210 && my <=250)	//Quit game
			{
				exit(0);
			}
		}
		if(flag1==1)
		{
			if(mx >=20 && mx <=80  && my >= 625 && my <=645)	//Option in second screen
			{
					if(flag4==1) flag4=0;
					else flag4++;
			}
			if(flag4==1)
			{
				if(mx >=20 && mx <=80  && my >= 555 && my <=575)	//Back in first screen
				{
					flag9=4;
				}
				if(mx >=20 && mx <=80  && my >= 585 && my <=605)	//Save game	
				{
					save();
					New();
				}
			}
			if(flag4==0)
				if(mx >=50 && mx <=650  && my >= 20 && my <=50)		//Player1 rack
				{
					flag5=0;
					flag27=0;
					flag14=0;
					fx=50;
					for(i=0;fx<650;i++)
					{
						flag5++;
						if(mx>=fx && mx<=(fx+=40) && my>20 && my<=50)
							break;
					}
				}
			if(flag5&&!flag27)
				if(mx >=50 && mx <=650  && my >= 120 && my <=570)	//Game board
				{	
					move++;
					flag16=0;
					flag6=0;
					gy=570;
					fy=540;
					n=0;
					for(i=0;gy>120;i++)
					{
						flag7=0;
						fx=50;
						gx=90;
						flag6++;
						for(j=0;fx<650;j++)
						{
							flag7++;
							if(mx>=fx && mx<=gx && my>=fy && my<=gy)
							{
								n=1;
								break;
							}
							fx+=40;
							gx+=40;
						}
						if(n==1) break;
						fy-=30;
						gy-=30;
					}
				}
			if(flag8)							//Ok in Firstmove
			{
				if(mx>=890&&mx<=940&&my>=110&&my<=130)
				{
					flag20=0;
					flag8=0;
					flag7=0;
					flag6=0;
					flag5=0;
				}
			}
			if(mx >=680 && mx <=780 && my >= 20 && my <=60)		//Place
			{
				flag8=1;
				flag9=0;
			}
			if(mx >=790 && mx <=920  && my >= 20 && my <=60)	//Excange
			{
				int c=0;
				char ch;
				for(i=0;str1[i];)
				{
					for(j=0,k=0;str3[j];j++)
					{
						if(str3[j]!='0')
						{
							k=1;
							break;
						}
					}
					if(k==1)
					{
						c=rand()%100;
						if(str3[c]!='0')
						{
							ch=str1[i];
							str1[i]=str3[c];
							str3[c]=ch;
							i+=3;
						}
					}
					else break;
				}
				turn++;
				flag8=0;
				h=0;
				flag9=0;
			}
			if(mx >=930 && mx <=1030  && my >= 20 && my <=60)	//Pass
			{
				turn++;
				flag8=0;
				h=0;
				flag9++;
			}
			if(flag8)
				if(!flag14)
			if(mx >=790 && mx <=840  && my >= 210 && my <=230)	//Ok in Validmove
			{
				flag21=0;
				flag25=0;
				turn++;
				flag8=0;
				flag7=0;
				flag6=0;
				flag5=0;
				flag14++;
				h=0;
			}
			if(flag10==1)											//ok in final score
				if(mx >=500 && mx <=550  && my >= 215 && my <=240)
				{
					New();
					flag10=0;
				}
		}
		if(flag3==1)								//ok in manual
			if(mx >=500 && mx <=570  && my >= 120 && my <=150)
				{
					flag3=0;
				}
	}			
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}
void iKeyboard(unsigned char key)
{
	flag26=1;
	if(flag10==0)
	if(turn%2)					//moving tiles in gameboard
	{
		clag22=0;
		if(key!='\r'&&key!='\b')
		{
			clag5=0;
			clag6=0;
			clag7=0;
			flag14=0;
			flag16=0;
			for(i=0;str7[i];i++)
			{
				clag5++;
				if(toupper(key)==str7[i])
				{
					flag26=0;
					break;
				}
			}
			if(clag5<16)
			{
				move++;
				clag7=(ax-50)/40+1;
				clag6=(540-by)/30+1;
			}
		}
		if(!flag8)
			if(key=='\r')				//place
			{
				flag8=1;
				clag22=1;
			}
			if(clag22==0)
			{
				if(flag8)
					if(key=='\b')				//ok in Firstmove
					{
						flag20=0;
						clag7=0;
						clag6=0;
						clag5=0;
						flag8=0;
					}
				if(flag8)
					if(!flag14)
						if(key=='\r')		//ok in Validmove
						{
							flag21=0;
							clag5=0;
							flag25=0;
							clag6=0;
							clag7=0;
							flag8=0;
							turn++;
							flag14++;
							h=0;
						}
			}
	}
	if(flag10==1)			//ok in final score
		if(key=='\r')
		{
			New();
			flag10=0;
		}
}
void iSpecialKeyboard(unsigned char key)
{
	int c=0;
	char ch;
	if(key == GLUT_KEY_LEFT)
	{
			ax-=40;
			if(ax<50)
				ax=50;
			
	}
	if(key == GLUT_KEY_RIGHT)
	{
			ax+=40;
			if(ax>610)
				ax=610;
	}
	if(key == GLUT_KEY_UP)
	{
			by+=30;
			if(by>540)
				by=540;
	}
	if(key == GLUT_KEY_DOWN	)
	{
			by-=30;
			if(by<120)
				by=120;
	}
	if(key == GLUT_KEY_PAGE_UP)			//Exchange
	{
		for(i=0;str7[i];)
		{
			for(j=0,k=0;str3[j];j++)
				{
					if(str3[j]!='0')
					{
						k=1;
						break;
					}
				}
				if(k==1)
				{
					c=rand()%100;
					if(str3[c]!='0')
					{
						ch=str7[i];
						str7[i]=str3[c];
						str3[c]=ch;
						i+=3;
					}
				}
				else break;
		}
		turn++;
		flag8=0;
		h=0;
		flag9=0;
	}
	if(key ==  GLUT_KEY_PAGE_DOWN)		//pass
	{
		flag8=0;
		turn++;
		h=0;
		flag9++;
	}
	if(key ==  GLUT_KEY_END)			//back from current game
	{
		flag9=4;
	}
}
int main()
{
iInitialize(1100, 650, "Scrabble Word");
return 0;
}

