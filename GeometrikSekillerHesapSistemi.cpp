#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <stdio.h>

using namespace std;

void fullscreen(); 				//tam ekran fonksiyonu 
int i,j;						//for döngülerinde kullandýðýmýz deðiþkenler
int kenar_2d,kenar_2d_2,kenar_2d_3,kenar_2d_4,kenar_2d_5;	// 2d cisimlerin kenar deðiþkenleri
int kenar_3d,kenar_3d_2,kenar_3d_3,kenar_3d_4,kenar_3d_5; 	//3d cisimlerin kenar deðiþkenleri
char yan_cizgi=220;				// menü çizgileri
char dik_cizgi=219;			  	// menü çizgileri
int secimBoyut;					//cisimlerin boyutunun atandýðý deðiþken
int secim_3d;					//3D boyutlu cisimlerde ....
int secim_2d; 					//2D boyutlu cisimlerde...
int secim;						//if-else yapýlarýnda seçim için kullandýðýmýz ortak deðiþken
int menu_3d(); 					//3d cisim menu fonksiyonu
int menu_2d(); 					//2d cisim menu fonksiyonu
int anamenu(); 					//Anamenü arayüz fonksiyonu
int cisimMenu_2d();				//Seçilen 2 boyutlu cisimlerin menü arayüz fonksiyonu
int cisimMenu_3d();				//Seçilen 3 boyutlu cisimlerin menü arayüz fonksiyonu
int hesapMenu_2d();				//2 boyutlu cisimlerde hesaplama menüsü fonksiyonu
int hesapMenu_3d();				//3 boyutlu cisimlerde hesaplama menüsü fonksiyonu
int baslik3d();					//3 boyutlu cisimler için baþlýk fonksiyonu
int baslik2d();					//2 boyutlu cisimler için baþlýk fonksiyonu
double kareAlan(int); double kareCevre(int);
double ddortgenAlan(int,int); double ddortgenCevre(int,int);
double pkenarAlan(int,int); double pkenarCevre(int,int);
double yamukAlan(int,int,int); double yamukCevre(int,int,int,int);
double ucgenAlan(int,int); double ucgenCevre(int,int,int);
double eucgenAlan(int,int); double eucgenCevre(int);
double dbesgenAlan(int,int); double dbesgenCevre(int);
double daltigenAlan(int,int); double daltigenCevre(int);
double dsekizgenAlan(int,int); double dsekizgenCevre(int);
double dcokgenAlan(int,int,int); double dcokgenCevre(int,int);
double daireAlan(int); double daireCevre(int);
double dhalkaAlan(int,int); double dhalkaCevre(int,int);
double ddilimiAlan(int,int); double ddilimiCevre(int,int);
double dparcasiAlan(int,int); double dparcasiCevre(int,int);
double elipsAlan(int,int); double elipsCevre(int,int);
double kupAlan(int); double kupHacim(int);
double ddprizmaAlan(int,int,int); double ddprizmaHacim(int,int,int);
double uprizmaAlan(int,int); double uprizmaHacim(int,int);
double kpiramitAlan(int,int); double kpiramitHacim(int,int);
double upiramitAlan(int,int); double upiramitHacim(int,int);  
double silindirAlan(int,int); double silindirHacim(int,int);
double koniAlan(int,int); double koniHacim(int,int);
double kkoniAlan(int,int,int); double kkoniHacim(int,int,int);
double kureAlan(int); double kureHacim(int);
double kkureAlan(int,int,int,int); double kkureHacim(int,int,int);



int main() {
	fullscreen();
	system ("cls");		
	cout << anamenu(); 									//tanýmladýðýmýz anamenü fonksiyonunu yazdýrma
	switch (secimBoyut){								//2d-3d cisimlerin seçimi için oluþturduðumuz switch-case yapýsý
		etiket2d:										//2 boyutlu cisimler menüsü için oluþturduðumuz goto geri dönüþ noktasý
		case 1:
			system("cls");
			cout << menu_2d();							//2 boyutlu cisimler menüsünü yazdýrma
			
			switch(secim_2d){							//iki boyutlu cisimler için oluþturduðumuz switch-case yapýsý
															
				etiketkare: 								//goto geri dönüþ noktasý
				case 1:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketkare;
					}
					if(secim==3)
						goto etiket2d;					//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)			//Alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();				//hesaplama menüsü fonksiyonunu yazdýrma
								if(secim!=0)
								{
									goto etiketkare;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)			//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();				//hesaplama menüsü fonksiyonunu yazdýrma
								if(secim!=0)
								{
									goto etiketkare;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketddortgen://goto geri dönüþ noktasý
				case 2:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketddortgen;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//Alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketddortgen;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketddortgen;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketpkenar://goto geri dönüþ noktasý
				case 3:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketpkenar;
					}
					if(secim==3)
						goto etiket2d;					//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketpkenar;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketpkenar;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketyamuk://goto geri dönüþ noktasý
				case 4:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketyamuk;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketyamuk;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketyamuk;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
			
				etiketucg2d://goto geri dönüþ noktasý
				case 5:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketucg2d;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketucg2d;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketucg2d;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketesku2d://goto geri dönüþ noktasý
				case 6:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketesku2d;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketesku2d;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketesku2d;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketdbesg://goto geri dönüþ noktasý
				case 7:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketdbesg;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdbesg;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdbesg;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketdalt://goto geri dönüþ noktasý
				case 8:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketdalt;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdalt;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdalt;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketdsekz://goto geri dönüþ noktasý
				case 9:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrmaif(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketdsekz;
					}
					
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdsekz;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdsekz;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketcokg://goto geri dönüþ noktasý
				case 10:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketcokg;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketcokg;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketcokg;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketdaire://goto geri dönüþ noktasý
				case 11:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketdaire;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdaire;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdaire;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketdhalk://goto geri dönüþ noktasý
				case 12:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketdhalk;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdhalk;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdhalk;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketddil://goto geri dönüþ noktasý
				case 13:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketddil;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketddil;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketddil;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketdparc://goto geri dönüþ noktasý
				case 14:
					system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketdparc;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdparc;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketdparc;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
				
				etiketelips://goto geri dönüþ noktasý
				case 15:
				system ("cls");
					cout << cisimMenu_2d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketelips;
					}
					if(secim==3)
						goto etiket2d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketelips;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//çevre menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_2d();
								if(secim!=0)
								{
									goto etiketelips;
								}
								if(secim==0)
								{
									return main();
								}	 
							}	
				break;
				
				case 0:								//anamenüye geri dönüþ
					return main();
				break;
				
				default:
					cout << "Yanlis secim"<<endl;
					goto etiket2d;
				break;
					
			}	
		break;
		 	
		etiket3d: 										//3 boyutlu cisimler menüsü için oluþturduðumuz goto geri dönüþ noktasý
		case 2:
			system("cls");
			cout << menu_3d();							//3 boyutlu ciisimler menüsünü yazdýrma
	
			switch(secim_3d){							//üç boyutlu cisimler için oluþturduðumuz switch-case yapýsý
			
				etiketkup:
				case 1:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketkup;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkup;
								}
								else if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkup;
								}
								else if(secim==0)
								{
									return main();
								}	 
							}
				break;
		
				etiketdp:
				case 2:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketdp;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)		//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)			
								{
									goto etiketdp;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)		//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)			
								{
									goto etiketdp;
								}
								if(secim==0)
								{
									return main();
								}	 
							}	 
				break;
		
				etiketucp:
				case 3:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketucp;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketucp;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketucp;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
		
				etiketkp:	
				case 4:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketkp;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkp;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkp;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
		
				etiketucpr:	
				case 5:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketucpr;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketucpr;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketucpr;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
		
				etiketsil:	
				case 6:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketsil;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
								goto etiketsil;
								}
									if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketsil;
								}
								if(secim==0)
								{
									return main();
								}	 
							}	
				break;
		
				etiketkoni:	
				case 7:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketkoni;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkoni;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkoni;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
		
				etiketkkoni:
				case 8:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketkkoni;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkkoni;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkkoni;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
			
				etiketkure:	
				case 9:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketkure;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
							system("cls");
							cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkure;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
								system("cls");
								cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkure;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
				break;
		
				etiketkkure:	
				case 10:
					system ("cls");
					cout << cisimMenu_3d();				//seçtiðimiz iki boyutlu cisim menüsünü yazdýrma
					if(secim!=0&&secim!=1&&secim!=2&&secim!=3)
					{
						cout << "Yanlis Secim";
						goto etiketkkure;
					}
					if(secim==3)
						goto etiket3d;//belirlediðimiz noktaya geri dönme
					else if(secim==0)
						return main();
							else if(secim==1)				//alan menüsü seçimi
							{
							system("cls");
							cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkkure;
								}
								if(secim==0)
								{
									return main();
								}	 
							}
							else if(secim==2)				//hacim menüsü seçimi
							{
							system("cls");
							cout << hesapMenu_3d();
								if(secim!=0)
								{
									goto etiketkkure;
								}
								if(secim==0)
								{
									return main();
								}
							}
				break;
			
				case 0:					//anamenüye geri dönüþ
					return main();
				break;
		
				default:
					cout << "Yanlis secim"<<endl;
					goto etiket3d;
				break;
			}
		break;	
		
		case 0:				//programdan çýkýþ
			return 0;
		break;

		default:
			cout << "Yanlis secim"<<endl;
			return main();
		break;
	}
getch();
return 0; 
}
void fullscreen(){			//tam ekran fonksiyonu
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void gotoxy(int x, int y){ //koordinat sisteminde x ve y yi kullanmamýza yarayan program
	COORD coord;
	coord.X=x;
	coord.Y=y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int anamenu(){				//anamenü fonksiyonu
	for(i=60;i<110;i++)
	{
		gotoxy(i,1);
    	cout << yan_cizgi;
	}
			gotoxy(62,2);
			cout << "GEOMETRIK CISIMLERDE TEMEL HESAPLAMALAR SISTEMI";	
			
			for(i=60;i<110;i++)
			{
				gotoxy(i,3);
				cout << yan_cizgi;
			}
			for(j=2;j<4;j++)
			{
				gotoxy(60,j);
				cout << dik_cizgi;
			}
			for(j=2;j<4;j++)
			{
				gotoxy(109,j);
				cout << dik_cizgi;
			}
			for(i=60;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			for(i=55;i<77;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			gotoxy(77,4);
			cout << " A N A M E N U ";
			for(i=95;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
		for(i=55;i<115;i++)
		{
			gotoxy (i,6);
			cout << yan_cizgi;
		}
			gotoxy(58,9);
			cout << "[1]. 2D CISIM";
			gotoxy(58,10);
			cout << "[2]. 3D CISIM";
			gotoxy(58,11);
			cout << "[0]. CIKIS";
			gotoxy(109,12);
			cout << "v1.0";
			
			for (i=55; i<115; i++)
			{
				gotoxy(i,13);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,15);
				cout << yan_cizgi;
			}
			for(j=5;j<16;j++)
			{
				gotoxy(55,j);
				cout << dik_cizgi;
			}
			for(j=5;j<16;j++)
			{
				gotoxy(114,j);
				cout << dik_cizgi;
			}
			gotoxy(57, 14);
			cout << "SECENEK (0, 1, 2): ";
			cin>>secimBoyut;
}

int baslik2d (){			//her iþlem aþamasýnda seçtiðimiz 2d cisimin adýný menü baþlýðýna yazdýrmamýza yarayan fonksiyon
	if(secim_2d==1)
	puts(" KARE ");
	if(secim_2d==2)
	puts(" DIKDORTGEN ");
	if(secim_2d==3)
	puts(" PARALELKENAR ");
	if(secim_2d==4)
	puts(" YAMUK ");
	if(secim_2d==5)
	puts(" UCGEN ");
	if(secim_2d==6)
	puts(" ESKENAR UCGEN ");
	if(secim_2d==7)
	puts(" DUZGUN BESGEN ");
	if(secim_2d==8)
	puts(" DUZGUN ALTIGEN ");
	if(secim_2d==9)
	puts(" DUZGUN SEKIZGEN ");
	if(secim_2d==10)
	puts(" COKGEN ");
	if(secim_2d==11)
	puts(" DAIRE ");
	if(secim_2d==12)
	puts(" DAIRE HALKASI ");
	if(secim_2d==13)
	puts(" DAIRE DILIMI ");
	if(secim_2d==14)
	puts(" DAIRE PARCASI ");
	if(secim_2d==15)
	puts(" ELIPS ");
}

int baslik3d(){				//her iþlem aþamasýnda seçtiðimiz 3d cisimin adýný menü baþlýðýna yazdýrmamýza yarayan fonksiyon
	if(secim_3d==1)
	puts(" KUP ");
	if(secim_3d==2)
	puts(" DIKDORTGEN PRIZMA ");
	if(secim_3d==3)
	puts(" ESKENAR UCGEN PRIZMA ");
	if(secim_3d==4)
	puts(" KARE PIRAMIT ");
	if(secim_3d==5)
	puts(" UCGEN PIRAMIT ");
	if(secim_3d==6)
	puts(" SILINDIR ");
	if(secim_3d==7)
	puts(" KONI ");
	if(secim_3d==8)
	puts(" KESIK KONI ");
	if(secim_3d==9)
	puts(" KURE ");
	if(secim_3d==10)
	puts(" KESIK KURE ");
}

int menu_2d(){				//2d cisimler içinmenü arayüz fonksiyonu
			for(i=60;i<110;i++)
			{
				gotoxy(i,1);
				cout << yan_cizgi;
			}
			gotoxy(62,2);
			cout << "GEOMETRIK CISIMLERDE TEMEL HESAPLAMALAR SISTEMI";
			for(i=60;i<110;i++)
			{
				gotoxy(i,3);
				cout << yan_cizgi;
			}
			
			for(j=2;j<4;j++)
			{
				gotoxy(60,j);
				cout << dik_cizgi;
			}
			for(j=2;j<4;j++)
			{
				gotoxy(109,j);
				cout << dik_cizgi;
			}
	
			for(i=60;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			
	
			for(i=55;i<75;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			gotoxy(75,4);
			cout << " 2 BOYUTLU CISIMLER ";
			for(i=95;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,6);
				cout << yan_cizgi;
			}
			gotoxy(60,7);
			cout<<"Bu program MKS birim sistemine gore hesaplama yapar";
			gotoxy(58,10);
			cout << "[1]. KARE";
			gotoxy(88,10);
			cout << "[2]. DIKDORTGEN";
			gotoxy(58,12);
			cout << "[3]. PARALELKENAR";
			gotoxy(88,12);
			cout << "[4]. YAMUK";
			gotoxy(58,14);
			cout << "[5]. UCGEN";
			gotoxy(88,14);
			cout << "[6]. ESKENAR UCGEN";
			gotoxy(58,16);
			cout << "[7]. DUZGUN BESGEN";
			gotoxy(88,16);
			cout << "[8]. DUZGUN ALTIGEN";
			gotoxy(58,18);
			cout << "[9]. DUZGUN SEKIZGEN";
			gotoxy(88,18);
			cout << "[10]. COKGEN";
			gotoxy(58,20);
			cout << "[11]. DAIRE";
			gotoxy(88,20);
			cout << "[12]. DAIRE HALKASI";
			gotoxy(58,22);
			cout << "[13]. DAIRE DILIMI";
			gotoxy(88,22);
			cout << "[14]. DAIRE PARCASI";
			gotoxy(58,24);
			cout << "[15]. ELIPS";
			gotoxy(80,26);
			cout << "[0]. ANAMENU";
			
			for(i=55;i<115;i++)
			{
				gotoxy(i,28);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
						gotoxy(i,31);
						cout << yan_cizgi;
			}
			for(j=5;j<32;j++)
			{
				gotoxy(55,j);
				cout << dik_cizgi;
			}
			for(j=5;j<32;j++)
			{
				gotoxy(114,j);
				cout << dik_cizgi;
			}
			gotoxy(57,29);
			cout << "SECENEK (0, 1, 2 ... 14, 15 ): "; cin>>secim_2d;
	}
	
int menu_3d(){				//3d cisimler içinmenü arayüz fonksiyonu
			for(i=60;i<110;i++)
			{
				gotoxy(i,1);
				cout << yan_cizgi;
			}
			gotoxy(62,2);
			cout << "GEOMETRIK CISIMLERDE TEMEL HESAPLAMALAR SISTEMI";
			for(i=60;i<110;i++)
			{
				gotoxy(i,3);
				cout << yan_cizgi;
			}
			
			for(j=2;j<4;j++)
			{
				gotoxy(60,j);
				cout << dik_cizgi;
			}
			for(j=2;j<4;j++)
			{
				gotoxy(109,j);
				cout << dik_cizgi;
			}
			
			for(i=60;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			for(i=55;i<75;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			gotoxy(75,4);
			cout << " 3 BOYUTLU CISIMLER ";
			for(i=95;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,6);
				cout << yan_cizgi;
				}
			gotoxy(60,7);
			cout << "Bu program MKS birim sistemine gore hesaplama yapar";
			gotoxy(58,10);
			cout << "[1]. KUP";
			gotoxy(88,10);
			cout << "[2]. DIKDORTGEN PRIZMA";
			gotoxy(58,12);
			cout << "[3]. ESKENAR UCGEN PRIZMA";
			gotoxy(88,12);
			cout << "[4]. KARE PIRAMIT";
			gotoxy(58,14);
			cout << "[5]. UCGEN PIRAMIT";
			gotoxy(88,14);
			cout << "[6]. SILINDIR";
			gotoxy(58,16);
			cout << "[7]. KONI";
			gotoxy(88,16);
			cout << "[8]. KESIK KONI";
			gotoxy(58,18);
			cout << "[9]. KURE";
			gotoxy(88,18);
			cout << "[10]. KESIK KURE";
			gotoxy(78,21);
			cout << "[0]. ANAMENU";
			
			
			
			for(i=55;i<115;i++)
			{
				gotoxy(i,24);
				cout << yan_cizgi;
			}
			
			
			
			for(i=55;i<115;i++)
			{
						gotoxy(i,27);
						cout << yan_cizgi;
			}
			for(j=5;j<28;j++)
			{
					gotoxy(55,j);
					cout << dik_cizgi;
			}
			for(j=5;j<28;j++)
			{
					gotoxy(114,j);
					cout << dik_cizgi;
			}
			gotoxy(57,25);
			cout << "SECENEK (0, 1, 2, ... 9, 10 ): "; cin>>secim_3d;
			
}

int cisimMenu_2d(){			//seçtiðimiz 2d cisim için oluþturduðumuz menü arayüz fonksiyonu
			for(i=60;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
				gotoxy(79,5);
				cout << baslik2d();
			for(i=55;i<115;i++)
			{
				gotoxy(i,6);
				cout << yan_cizgi;
			}
			gotoxy(60,7);
			cout << "Bu program MKS birim sistemine gore hesaplama yapar";
			gotoxy(58,9);
			cout << "[1]. ALAN HESABI";
			gotoxy(58,10);
			cout << "[2]. CEVRE HESABI";
			gotoxy(58,11);
			cout << "[3]. BIR ONCEKI MENU";
			gotoxy(58,12);
			cout << "[0]. CIKIS";
			gotoxy(109,13);
			cout << "v1.0";
			
			for(i=55;i<115;i++)
			{
				gotoxy(i,14);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,16);
				cout << yan_cizgi;
			}
			for(j=5;j<17;j++)
			{
				gotoxy(55,j);
				cout << dik_cizgi;
			}
			for(j=5;j<17;j++)
			{
				gotoxy(114,j);
				cout << dik_cizgi;
			}
			gotoxy(57,15);
			cout << "SECENEK (1 , 2 , 3 , 0): "; cin>>secim;
}

int cisimMenu_3d(){			//seçtiðimiz 3d cisim için oluþturduðumuz menü arayüz fonksiyonu	
  			for(i=60;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			
	
			for(i=55;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
				
				gotoxy(79,5);
				cout << baslik3d();
			
			for(i=55;i<115;i++)
			{
				gotoxy(i,6);
				cout << yan_cizgi;
			}
			gotoxy(60,7);
			cout << "Bu program MKS birim sistemine gorre hesaplama yapar";
			gotoxy(58,9);
			cout << "[1]. ALAN HESABI";
			gotoxy(58,10);
			cout << "[2]. HACIM HESABI";
			gotoxy(58,11);
			cout << "[3]. BIR ONCEKI MENU";
			gotoxy(58,12);
			cout << "[0]. CIKIS";
			gotoxy(109,13);
			cout << "v1.0";
			
			for(i=55;i<115;i++)
			{
				gotoxy(i,14);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,16);
				cout << yan_cizgi;
			}
			for(j=5;j<17;j++)
			{
				gotoxy(55,j);
				cout << dik_cizgi;
			}
			for(j=5;j<17;j++)
			{
				gotoxy(114,j);
				cout << dik_cizgi;
			}
			gotoxy(57,15);
			cout << "SECENEK (1 , 2 , 3 , 0): "; cin>>secim;
}

int hesapMenu_2d(){			//iþlem yapacaðýmýz 2d cisim için hesaplama menü arayüz fonksiyonu
			for(i=60;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
				gotoxy(79,5);
				cout << baslik2d();
			for(i=55;i<115;i++)
			{
				gotoxy(i,6);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,13);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,15);
				cout << yan_cizgi;
			}
			for(j=5;j<16;j++)
			{
				gotoxy(55,j);
				cout << dik_cizgi;
			}
			for(j=5;j<16;j++)
			{
				gotoxy(114,j);
				cout << dik_cizgi;
			}
			gotoxy(58,8);
			if(secim_2d==1)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "KENAR UZUNLUGU (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
					if(secim==1)
						cout << "KARE ALANI: "<<kareAlan(kenar_2d)<<" m2 dir.";
					else if(secim==2)
						cout << "KARE CEVRESI: "<<kareCevre(kenar_2d)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
				
			}
			if(secim_2d==2)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "BIRINCI KENAR (m ):";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "IKINCI KENAR (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "DIKDORTGEN ALANI: "<<ddortgenAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout << "DIKDORTGEN CEVRESI: "<<ddortgenCevre(kenar_2d,kenar_2d_2)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			
			if(secim_2d==3)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "TABAN KENARI (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "EGIK KENAR (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_2d_3;
				gotoxy(58,11);
					if(secim==1)
						cout << "PARALEL KENAR ALANI: "<<pkenarAlan(kenar_2d,kenar_2d_3)<<" m2 dir.";
					else if(secim==2)
						cout << "PARALEL KENAR CEVRESÝ: "<<pkenarCevre(kenar_2d,kenar_2d_2)<<" m dir.";	
				gotoxy(58,12);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(88,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==4)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "TABAN KENARI (m) :";
				cin>>kenar_2d;
				gotoxy(88,8);
				cout << "UST KENAR (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,9);
				cout << "BIRINCI YAN KENAR (m) :";
				cin>>kenar_2d_3;
				gotoxy(88,9);
				cout << "IKINCI YAN KENAR (m) :";
				cin>>kenar_2d_4;
				gotoxy(58,10);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_2d_5;
				gotoxy(58,11);
					if(secim==1)
						cout << "YAMUK ALANI: "<<yamukAlan(kenar_2d,kenar_2d_2,kenar_2d_5)<<" m2 dir.";
					else if(secim==2)
						cout << "YAMUK CEVRESI: "<<yamukCevre(kenar_2d,kenar_2d_2,kenar_2d_3,kenar_2d_4)<<" m dir.";	
				gotoxy(58,12);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(88,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==5)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "TABAN KENARI (m) :";
				cin>>kenar_2d;
				gotoxy(88,8);
				cout << "IKINCI KENAR (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,9);
				cout << "UCUNCU KENAR (m) :";
				cin>>kenar_2d_3;
				gotoxy(88,9);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_2d_4;
				gotoxy(58,11);
					if(secim==1)
						cout << "UCGEN ALANI: "<<ucgenAlan(kenar_2d,kenar_2d_4)<<" m2 dir.";
					else if(secim==2)
						cout << "UCGEN CEVRESÝ: "<<ucgenCevre(kenar_2d,kenar_2d_2,kenar_2d_3)<<" m dir.";	
				gotoxy(58,12);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(88,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==6)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "KENAR UZUNLUGU (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,110);
					if(secim==1)
						cout << "ESKENAR UCGEN ALANI: "<<eucgenAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "ESKENAR UCGEN CEVRESÝ: "<<eucgenCevre(kenar_2d)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==7)
			{
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "KENAR UZUNLUGU (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "MERKEZE UZAKLIK (m):";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "DUZGUN BESGEN ALANI: "<<dbesgenAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DUZGUN BESGEN CEVRESI: "<<dbesgenCevre(kenar_2d)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;	
			}
			if(secim_2d==8)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "KENAR UZUNLUGU (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "MERKEZE UZAKLIK (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "DUZGUN ALTIGEN ALANI: "<<daltigenAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DUZGUN ALTIGEN CEVRESÝ: "<<daltigenCevre(kenar_2d)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;	
			}
			if(secim_2d==9)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "KENAR UZUNLUGU (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "MERKEZE UZAKLIK (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "DUZGUN SEKIZGEN ALANI: "<<dsekizgenAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DUZGUN SEKIZGEN CEVRESÝ: "<<dsekizgenCevre(kenar_2d)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==10)
			{   
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << ("KENAR SAYISI:");
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "KENAR UZUNLUGU (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
				cout << "MERKEZE UZAKLIK (m) :";
				cin>>kenar_2d_3;
				gotoxy(58,11);
					if(secim==1)
						cout << "DUZGUN COKGEN ALANI: "<<dcokgenAlan(kenar_2d_2,kenar_2d,kenar_2d_3)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DUZGUN COKGEN CEVRESÝ: "<<dcokgenCevre(kenar_2d,kenar_2d_2)<<" m dir.";	
				gotoxy(58,12);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(88,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==11)
			{   
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout <<"YARICAP (m) :";
				cin>>kenar_2d;
				gotoxy(58,10);
					if(secim==1)
						cout << "DAIRE ALANI: "<<daireAlan(kenar_2d)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DUZGUN COKGEN CEVRESÝ: "<<daireCevre(kenar_2d)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==12)
			{  
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8); 
				cout << "BUYUK DAIRENIN YARICAPI (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "KUCUK DAIRENIN YARICAPI (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "DAIRE HALKASI ALANI: "<<dhalkaAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DAIRE HALKASI CEVRESÝ: "<<dhalkaCevre(kenar_2d,kenar_2d_2)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==13)
			{   	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "YARICAP (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "MERKEZ ACISI (derece) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "DAIRE DILIMI ALANI: "<<ddilimiAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DAIRE DILIMI CEVRESÝ: "<<ddilimiCevre(kenar_2d,kenar_2d_2)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_2d==14)
			{  
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8); 
				cout << "YARICAP (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "MERKEZ ACISI (derece) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "DAIRE PARCASI ALANI: "<<dparcasiAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DAIRE PARCASI CEVRESÝ: "<<dparcasiCevre(kenar_2d,kenar_2d_2)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
				if(secim_2d==15)
			{  
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8); 
				cout << "UZUN CAP (m) :";
				cin>>kenar_2d;
				gotoxy(58,9);
				cout << "KISA CAP (m) :";
				cin>>kenar_2d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "ELIPS ALANI: "<<elipsAlan(kenar_2d,kenar_2d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "ELIPS CEVRESÝ: "<<elipsCevre(kenar_2d,kenar_2d_2)<<" m dir.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
}

int hesapMenu_3d(){			//iþlem yapacaðýmýz 3d cisim için hesaplama menü arayüz fonksiyonu
	for(i=60;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,4);
				cout << yan_cizgi;
			}
				gotoxy(79,5);
				cout << baslik3d();
			for(i=55;i<115;i++)
			{
				gotoxy(i,6);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,13);
				cout << yan_cizgi;
			}
			for(i=55;i<115;i++)
			{
				gotoxy(i,15);
				cout << yan_cizgi;
			}
			for(j=5;j<16;j++)
			{
				gotoxy(55,j);
				cout << dik_cizgi;
			}
			for(j=5;j<16;j++)
			{
				gotoxy(114,j);
				cout << dik_cizgi;
			}
			gotoxy(58,8);
			if(secim_3d==1)
			{
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "KENAR UZUNLUGU (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
					if(secim==1)
						cout << "KUP YUZEY ALANI: "<<kupAlan(kenar_3d)<<" m2 dir.";
					else if(secim==2)
						cout << "KUP HACMI: "<<kupHacim(kenar_3d)<<" m3 tur.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==2)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "TABAN KISA KENAR (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "TABAN UZUN KENAR (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_3;
				gotoxy(58,11);
					if(secim==1)
						cout << "DIKDORTGEN PRIZMA YUZEY ALANI: "<<ddprizmaAlan(kenar_3d,kenar_3d_2,kenar_3d_3)<<" m2 dir.";
					else if(secim==2)
						cout <<  "DIKDORTGEN PRIZMA HACMI: "<<ddprizmaHacim(kenar_3d,kenar_3d_2,kenar_3d_3)<<" m3 tur.";	
				gotoxy(58,12);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(88,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==3)
			{  	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8); 
				cout << "TABAN KENARI (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "UCGEN PRIZMA YUZEY ALANI: "<<uprizmaAlan(kenar_3d,kenar_3d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "UCGEN PRIZMA HACMI: "<<uprizmaHacim(kenar_3d,kenar_3d_2)<<" m3 tur.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==4)
			{ 
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);  
				cout << "TABAN KENARI (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "KARE PIRAMIT YUZEY ALANI: "<<kpiramitAlan(kenar_3d,kenar_3d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "KARE PIRAMIT HACMI: "<<kpiramitHacim(kenar_3d,kenar_3d_2)<<" m3 tur.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==5)
			{  
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8); 
				cout << "TABAN KENARI (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "UCGEN PIRAMIT YUZEY ALANI: "<<upiramitAlan(kenar_3d,kenar_3d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "UCGEN PIRAMIT HACMI: "<<upiramitHacim(kenar_3d,kenar_3d_2)<<" m3 tur.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==6)
			{   
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "TABAN YARICAPI (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "SILINDIR YUZEY ALANI: "<<silindirAlan(kenar_3d,kenar_3d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "SILINDIR HACMI: "<<silindirHacim(kenar_3d,kenar_3d_2)<<" m3 tur.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==7)
			{   
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "TABAN YARICAPI (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
					if(secim==1)
						cout << "KONI YUZEY ALANI: "<<koniAlan(kenar_3d,kenar_3d_2)<<" m2 dir.";
					else if(secim==2)
						cout <<  "KONI HACMI: "<<koniHacim(kenar_3d,kenar_3d_2)<<" m3 tur.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==8)
			{	
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << ("TABAN DAIRESI YARICAPI (m) :");
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "TAVAN DAIRESI YARICAPI (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_3;
				gotoxy(58,11);
					if(secim==1)
						cout << "KESIK KONI YUZEY ALANI: "<<kkoniAlan(kenar_3d,kenar_3d_2,kenar_3d_3)<<" m2 dir.";
					else if(secim==2)
						cout <<  "KESIK KONI HACMI: "<<kkoniHacim(kenar_3d,kenar_3d_2,kenar_3d_3)<<" m3 tur.";	
				gotoxy(58,12);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(88,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==9)
			{
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "YARICAP (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
					if(secim==1)
						cout << "KURE YUZEY ALANI: "<<kureAlan(kenar_3d)<<" m2 dir.";
					else if(secim==2)
						cout << "KURE HACMI: "<<kureHacim(kenar_3d)<<" m3 tur.";	
				gotoxy(58,11);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(58,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
			if(secim_3d==10)
			{
				gotoxy(109,12);
				cout << "v1.0";
				gotoxy(58,8);
				cout << "TABAN DAIRESI YARICAPI (m) :";
				cin>>kenar_3d;
				gotoxy(58,9);
				cout << "TAVAN DAIRESI YARICAPI (m) :";
				cin>>kenar_3d_2;
				gotoxy(58,10);
				cout << "KURE YARICAPI (m) :";
				cin>>kenar_3d_3;
				gotoxy(81,10);
				cout << "YUKSEKLIK (m) :";
				cin>>kenar_3d_4;
				gotoxy(58,11);
					if(secim==1)
						cout << "KESIK KURE YUZEY ALANI: "<<kkureAlan(kenar_3d,kenar_3d_2,kenar_3d_3,kenar_3d_4)<<" m2 dir.";
					else if(secim==2)
						cout <<  "KESIK KURE HACMI: "<<kkureHacim(kenar_3d,kenar_3d_2,kenar_3d_3)<<" m3 tur.";	
				gotoxy(58,12);
				cout << "[3]. BIR ONCEKI MENU";
				gotoxy(88,12);
				cout << "[0]. CIKIS";
				gotoxy(58,14);
				cin>>secim;
			}
}

double kareAlan(int a){
	return(a*a);
}
double kareCevre(int a){
	return(4*a);
}
double ddortgenAlan(int a, int b){
	return(a*b);
}
double ddortgenCevre(int a, int b){
	return(2*(a+b));
}
double pkenarAlan(int a, int h){
	return(a*h);
}
double pkenarCevre(int a, int b){
	return(2*(a+b));
}
double yamukAlan(int a, int b, int h){
	return(((a+b)*h)/2);
}
double yamukCevre(int a, int b, int c, int d){
	return(a+b+c+d);
}
double ucgenAlan(int a, int h){
	return((a*h)/2);
}
double ucgenCevre(int a, int b, int c){
	return(a+b+c);
}
double eucgenAlan(int a, int h){
	return((a*h)/2);
}
double eucgenCevre(int a){
	return(3*a);
}
double dbesgenAlan(int a, int r){
	return((5*(a*r))/2);
}
double dbesgenCevre(int a){
	return(5*a);
}
double daltigenAlan(int a, int r){
	return((6*(a*r))/2);
}
double daltigenCevre(int a){
	return(6*a);
}
double dsekizgenAlan(int a, int r){
	return((8*(a*r))/2);
}
double dsekizgenCevre(int a){
	return(8*a);
}
double dcokgenAlan(int a, int b, int r){
	return((b*(a*r))/2);
}
double dcokgenCevre(int b, int a){
	return(b*a);
}
double daireAlan(int r){
	return(3.14*r*r);
}
double daireCevre(int r){
	return(3.14*2*r);
}
double dhalkaAlan(int a, int b){
	return(0.785*((a*a)-(b*b)));
}
double dhalkaCevre(int a, int b){
	return((2*3.14*a)-(2*3.14*b));
}
double ddilimiAlan(int r, int a){
	return(3.14*r*r*a/360);
}
double ddilimiCevre(int r, int a){
	return((6.28*r*a/360)+(2*r));
}
double dparcasiAlan(int r, int a){
	return(sin(a));
}
double dparcasiCevre(int r, int a){
	return(sin(a));
}
double elipsAlan(int a, int b){
	return(0.785*a*b);
}
double elipsCevre(int a, int b){
	return(3.14/2*(a+b));
}
double kupAlan(int a){
	return(6*a*a);
}
double kupHacim(int a){
	return(a*a*a);
}
double ddprizmaAlan(int a, int b, int c){
	return(2*((a*b)+(b*c)+(a*c)));
}
double ddprizmaHacim(int a, int b, int c){
	return(a*b*c);
}
double uprizmaAlan(int a, int h){
	return(((a*a*sqrt(3))/2)+(3*a*h));
}
double uprizmaHacim(int a, int h){
	return((((a*a*sqrt(3))/4)*h));
}
double kpiramitAlan(int a, int h){
	return(a*(a+sqrt((pow(a,2))+4*(pow(h,2)))));
}
double kpiramitHacim(int a, int h){
	return(((a*a)*h)/3);
}
double upiramitAlan(int a, int h){
	return(pow(a,2)*sqrt(3));
}
double upiramitHacim(int a, int b){
	return((pow(a,3)*sqrt(2))/12);
}
double silindirAlan(int a, int h){
	return((3.14*a*a)+(6.28*a*h));
}
double silindirHacim(int a, int h){
	return(3.14*a*a*h);
}
double koniAlan(int a, int h){
	return((3.14*a*sqrt((a*a)+(h*h)))+(3.14*a*a));
}
double koniHacim(int a, int h){
	return((3.14*a*a*h)/3);
}
double kkoniAlan(int a, int b, int h){
	return((3.14*(a+b)*sqrt((pow((a-b),2)+pow(h,2)))+3.14*(pow(a,2)+pow(b,2))));
}
double kkoniHacim(int a, int b, int h){
	return((1.04*h*(pow(a,2)+pow(b,2)+a*b)));
}
double kureAlan(int a){
	return(12.56*a*a);
}
double kureHacim(int a){
	return((12.56*a*a*a)/3);
}
double kkureAlan(int a, int b, int r, int h){
	return(3.14*((2*r*h)+pow(a,2)+pow(b,2)));
}
double kkureHacim(int a, int b, int h){
	return(((3.14*h)/6)*((3*(pow(a,2)+pow(b,2)))+pow(h,2)));
}
