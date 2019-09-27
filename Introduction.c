#include<stdio.h>
#include<conio.h>

int main(){

int a1=42;
char b1=66;
char b2='B';
float c1=4.2;
double d1=0.21;
printf("%d %c %d %.1f %.2f %s\n",a1,b1,b2,c1,d1,"TEST");

printf("%d byte\n",sizeof(char));
printf("%d byte\n",sizeof(int));
printf("%d byte\n",sizeof(short int));
printf("%d byte\n",sizeof(long int));
printf("%d byte\n",sizeof(float));
printf("%d byte\n",sizeof(double));
scanf("%d",&a1);


return 0;
}
//Matematiksel İslemler
	/*
		x+y--->toplama
		x-y---->çıkarma
		x*y---->çarpma
		x/y---->bölme
		x%y---->bölümünden kalan
		+x---->(+) ile çarpar
		-x---->(-) ile çarpar
		tekli oparatörlerde sağdan sola
		ikili ve üçlülerde soldan sağa
		parantez içi her zaman ilk
		*/
int main(){
	int x1 =1;
	int x2 =-1;
		
	printf("%d\n",-x1);
	
	printf("%d\n",58+42);
	
	int a=7;
	int y=6;
	int z=5;
	a+=y+5;
	printf("a:%d\n",a);
	printf("a:%d\ny:%d\nz:%d\n",a,y,z);
	int x=3;
	int b=0.1;
	printf("%f\n",x/b);
	//Otamatik dönüşüm yapılır float*int ise 2 si otomatik olarak float olur.
	printf("%.1f\n",2*4.2 +4%2);
	printf("%d\n",(int)3.2+5);
	printf("%d\n",(float)3);
	
	}
	
	//Giriş Çıkış işlemleri
	
//printf() giriş  scanf() çıkış 
//Küre hacmi hesaplama
#include<stdio.h>
#define pi 3
int main(){
	
	int r;
	float hacim;
	printf("kurenin yariçapini giriniz:");
	scanf("%d",&r);
	hacim=(4/3.0)*pi*(r*r*r);
	printf("Kurenin hacmi %f 'dir",hacim);	
}

int main(){
	char isim[20];
	printf("isminizi giriniz:");
	scanf("%s",isim);//scanf boşluga kadar algılar boşluktan sonraki yazılanları algılamaz
	//scan(%s) lerde & işareti kullanılmaz
	printf("isminiz:%s",isim);	
}

//Basit Kök Bulma

int main(){

	int a,b,c;
	float x1,x2;
	float delta;
	printf("NOT:ax^2+bx+c=0.\n");
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	delta=b*b-4*a*c;
	x1=(-b+(sqrt(delta)))/2*a;
	x2=(-b-(sqrt(delta)))/2*a;
	printf("1.koku:%.2f\n2.koku:%.2f",x1,x2);	
}

/*
		&& --->and bağlacı true && true &&false-->false
		|| --->or bağlacı yalnız biri true olması yeterli
		! ---->değilini alır true ise false olur
		şartlı cümleler
		a=x>y ? x:y;
		(eğer x>y ise(?) x değilse(:)y )
		*/
int main(){
	
	int a,b=20,c=30;
	a = b < c ? b : c;
	printf("%d",a);
}


// Basit Not ortalama bulma uygulaması

int main(){
	int vize1,vize2,final;
	float dersort;
	float ortalama;
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	printf("universite ortalamasini giriniz:");
	scanf("%d",&ortalama);
	dersort=(vize1+vize2+final)/3.0;
	if (dersort>60){
		printf("dersten gectiniz.Ders ortalamaniz %f dir",dersort);
	}
	else if(dersort>50){
		printf("Bute kaldiniz.ortalamanız %f",dersort);
		if(ortalama<2.5){
			printf("butu gecsende dersi seneye al çunku ortalaman dusuk");
		}
else{
	printf("kaldiniz.");
}

	}
	return 0;
}

//ATM Örneği

int main(){
	setlocale(LC_ALL,"Turkish");
	int islem;
	int bakiye=1000;
	int tutar;
	printf("******************************\n");
	printf("*	ışlemler             *\n*              		     *\n* 1:para cekme		     *\n* 2:para yatırma	     *\n* 3:havale yapma      	     *\n* 4:bakiye sorgulama         *\n* 5:kart iade	             *\n*              		     *\n*             		     *\n");
	printf("******************************\n");
	printf("islemi seciniz:");
	scanf("%d",&islem);
	switch(islem){
	case 1:{		
			printf("Bakiyeniz:%d\n",bakiye);
			printf("cekilecek tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("yetersiz bakiye.\n");
			}
			else{
			bakiye -=tutar;
			printf(" yeni bakiyeniz:%d\n",bakiye);
			}
			
		    break;
		}	
	case 2:{
		printf("Bakiyeniz:%d\n",bakiye);
			printf("yatirilacak tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("yetersiz bakiye.\n");
			}
			bakiye +=tutar;
			printf("yeni bakiyeniz:%d\n",bakiye);
		    break;
		}		
	case 3:{
		printf("Bakiyeniz:%d\n",bakiye);
			printf("havale yapilacak tutar:");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("yetersiz bakiye.\n");
			}
			bakiye +=tutar;
			printf("yeni bakiyeniz:%d\n",bakiye);
		    
		break;
		}
	case 4:{
		printf("Bakiyeniz:%d\n",bakiye);
		break;
		}	
	case 5:{
		printf("Kart iade edildi.");
		break;
	}
	default:
		printf("tanimlanmayan islem.");
		break;
	return 0;
	}
}

// Faktoriyel hesabı

int main(){
	int n;
	int fact=1;
	printf("faktoryelini hesaplamak istediginiz sayi:");
	scanf("%d",&n);
	
	
	while (n != 0){
	 	// printf("%d\n",n);
	 	fact=fact*n;
	 	
	 	n-=1; //(n--)
	 	}
	printf("%d",fact);
	return 0;
	}

//bir sayının rakamları toplamını bulma

main(){
	int n,hane=0,toplam=0;
	printf("sayiyi giriniz:");
	scanf("%d",&n);
	do{
		toplam +=(n%10);
		hane++;
		n=n/10;	
	}while(n>0);
	printf("rakamlari toplami %d %d Haneli",toplam,hane);
}

//Matris

int main(){
	int i;
	int j;
	for (i=0;i<3 ;i++){
		for (j=0;j<3;j++){
			printf("i:%d j %d\n",i,j);
		}
	}	
}

int main(){
		/*
		1 2 3
		4 5 6
		7 8 9 
		*/
	int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
}


//Girilen sayıların toplamını

int main(){
	
	int toplam=0;	
	int i;	
	int sayi;	
	for (i=0;;i++){
		printf("Sayiyi Giriniz:(Cikmak icin (-1)i tuslayin)");
		scanf("%d",&sayi);
		if (sayi==-1){
			break;
			}
	
		toplam +=sayi;
		}
	printf("%d",toplam);

	return 0;
}

//Dizi Bastırma

int main(){
	
	int sayilar[]={1,2,3,4,5};
	int i=0;
	
	for(;i<5;i++){
		printf("%d\n",sayilar[i]);
	}
}

// Aritmetik toplama
int main(){
	float toplam=0.0;
	float sayilar[5];
	int i;
	for(i=0;i<5;i++){
		printf("Bir sayi giriniz:");
		scanf("%f",&sayilar[i]);
	}
	for(i=0;i<5;i++){
		toplam+=sayilar[i];
	}
	printf("Girdiginiz sayiların aritmetik ortalamasi %.2f dir",toplam/5);	
}


//fonksiyonlara giriş
void hatayibas(int hata){
	printf("Hata kodu %d",hata);
}
int main(){
	int sayi;
	printf("Lutfen pozitif bir sayi giriniz:");
	scanf("%d",&sayi);
	if (sayi<0) {
		hatayibas(404);//fonksiyon çağırma burada yapıldı
	}
	else{
		printf("Doğru Bir Giriş Yaptınız.");
	}
}

//faktoriyel hesaplama
int faktoriyel(int sayi){
	int fact=1;
	for(;sayi>0;sayi--){
		fact*=sayi;
	}
	return fact;
}
int main(){
	int n;
	printf("faktoriyelini istediginiz sayiyi giriniz:");
	scanf("%d",&n);
	printf("%d!=%d",n,faktoriyel(n));
	
	return 0;
}

//Asal Sayı Olup Olmadığını bulma
int asal_mi(int sayi){
	int i;
	for (i=2;i<sayi;i++){
	 if(sayi%i==0){
	 	return 0;
	 }	
	}
	return 1;
}

int main(){
	int n;
	printf("Bir Sayi Giriniz:");
	scanf("%d",&n);
	
	if(asal_mi(n)==0){
		printf("Bu Sayi Asal Sayi Degildir.");
	}
else{
	printf("Bu Sayi Asal Sayidir.");
	}
	return 0;
}

//Matrilerde çarpma
int carp(int matris[],int size){
	int carpim=1;
	int i=0;
	for(;i<size;i++){
		carpim*=matris[i];
	}
	return carpim;
}
int main(){
	int sayilar[5]={1,2,3,4,5};
	printf("%d",carp(sayilar,5));
}

//Yazı boyutunu bulma

void terscevir(char dizi[]){
	int i,uzunluk,gecici;
	
	uzunluk=strlen(dizi); //strlen bir fonksiyon
	
	for (i=0;i<uzunluk/2;i++){
		gecici=dizi[i];
		dizi[i]=dizi[uzunluk-1-i];
		dizi[uzunluk-1-i]=gecici;
	}
}
int main(){
	char text[200];
	printf("Bir String giriniz:");
	scanf("%s",text);
	terscevir(text);
	printf("%s",text);
	return 0;
}

//Pointer

int main(){
	int i=123;
	int *p=&i;
	printf("%p\n",p);//%u da olabilir
	printf("%d",*p);
	
	//& adres bilgisini verir
	// * adresteki değeri verir			
}

int main(){
	
	int i,j=1;
	int *jp1,*jp2=&j;
	
	jp1= jp2;
	printf("%d\n",jp2);
	i=++(*jp2);
	printf("%d\n",i);
	*jp2=*jp1+i;
	printf("i=%d\nj=%d\n*jp1=%d\n*jp2=%d\n",i,j,*jp1,*jp2);	
}

void degerdegistir(int a,int b){
	int gecici=a;
	a=b;
	b=gecici;
	printf("a:%d b:%d\n",a,b);
	
}
int main(){
	int x=5,y=10;
	degerdegistir(x,y);
	printf("x:%d y:%d",x,y);
	return 0;
}
