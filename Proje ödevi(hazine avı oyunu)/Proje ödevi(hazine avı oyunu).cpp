#include <iostream>
#include <clocale>
#include <Windows.h>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

void LabirentHarita(int[][30]);
void LabirentOyunu();
void HeykelOyunu();
void OyunHikaye();
void BolumKaydetme(char);
void ItemKaydetme(string);
void ItemCikarma(string);
string ItemleriEkranaYazmaVeSecim();
char BolumKayitCekme();
void tuzakDiziOyunuHarita(int[][7]);
void tuzakDiziOyunuHareket();
void ZamanAyarliHareketOyunu();
void FinalHeykelOyunu();

int tuzakOyunuFlag;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char menuSecim;
	while(true)      //ana menü.
	{   
		system("CLS");
		cout << string(21, '_') << endl << "\n\tMİRAS\n" << string(21, '_') << endl;
		cout << "\n1-> Yeni Oyun\n\n";
		cout << "2-> Kayıtlı Oyundan Devam Et\n\n";
		cout << "3-> Çıkış\n\n";
		cout << "Yapmak istediğiniz işlemi seçiniz:";
		cin >> menuSecim;
		switch (menuSecim)
		{
		
		  case '1':
			BolumKaydetme('0');
			OyunHikaye();//oyun fonksiyonu burada devreye girecek.
		  case '2':
			if (BolumKayitCekme() == '1' || BolumKayitCekme() == '2' || BolumKayitCekme() == '3')
			{
				system("CLS");
				cout << "Kayıtlı oyun bulundu.\n\n";
				Sleep(20);
				cout << "OYUN BAŞLIYOR"; 
				Sleep(20);
				cout << "."; Sleep(1000); cout << "."; Sleep(10); cout << "."; Sleep(1000);
				OyunHikaye();
			}
			else 
			{
				cout << "kayıtlı Oyun bulunamadı.";
				Sleep(3000);
				continue;
			}
		  case '3':
			  return 0;
		  default:
			  cout << "Yanlış tuşlama yaptınız.";
			  Sleep(2000);
			  cin.ignore();
		}
	}
	return 0;
}
void OyunHikaye()
{
	switch (BolumKayitCekme()) 
	{
	 case '0':
		
	   {
		ofstream itemKayit("itemler.txt");
	   itemKayit << "kagit=0#heykelthor=0#heykelheimdall=0#anahtar=0#";
	   itemKayit.close();
	   system("CLS");
	   Sleep(1800);
	   cout << "OYUNA HOŞ GELDİNİZ.\n\n";
	   Sleep(3000);
	   cout << string(21, '_') << endl << "\n\tMİRAS\n" << string(21, '_') << endl;
	   Sleep(5000);
	   cout << "...................\n\n";
	   cout << "-Her zamanki gibi, sıradan bir gün.\n\n";
	   Sleep(2000);
	   cout << "-Müzedeki mesaisini bitirip evine dönen Lee  Williams kapısındaki postaları aldı ve eve girdi.\n\n";
	   Sleep(2000);
	   cout << "-Günün yorgunluğu ile kendisini koltuğa fırlattı ve postaları kontrol etmeye başladı.\n\n";
	   Sleep(3000);
	   cout << "-Postaların biri \"Avukat Oliver Jones\" tarafından gönderilmişti.\n\n";
	   Sleep(2000);
	   cout << "-Mektupta anne ve babasının bir trafik kazası sonucu vefat ettiği ve ona bir miras kaldığı yazıyordu.\n\n";
	   Sleep(3000);
	   cout << "-Derin bir üzüntüye kapılan Lee olduğu yerde kalakaldı.\n\n";
	   Sleep(2000);
	   cout << "-Günlerce süren yas sonunda Lee anne ve babasından kalan eve bakmak için yola çıktı. \n\n";
	   Sleep(2000);
	   cout << "-Ev eski ama bir o kadar değerli görünüyordu. Bir antika gibi. \n\n";
	   Sleep(2000);
	   cout << "-Lee, Ailesinden kalan eşyalara bakarken çalışma masasının üzerinde bir harita olduğunu fark etti. \n\n";
	   Sleep(2000);
	   cout << "-Harita üzerinde çeşitli çizimler yapılmıştı. Harita iskandinav yarım adasındaki Vagur Adasına aitti.\n\n";
	   Sleep(3000);
	   cout << "-Haritanın yanında duran notlarda ise hazine ve eski bir uygarlık hakkında bilgiler vardı.\n\n";
	   Sleep(2005);
	   cout << "-Lee, ailesinin üzerinde çalıştığı bu işin yarım kaldığı anımsadı ve bu yarım kalan işi kendisi bitirmek istedi.\n\n";
	   Sleep(2500);
	   cout << "-Lee ihtiyacı olan şeyleri alıp yarım kalan işi halletmek için yola koyuldu.\n\n";
	   Sleep(3000);
	   cout << "\t\n."; Sleep(10); cout << "."; Sleep(10); cout << "."; Sleep(40);
	   system("CLS");
	   cout << string(21, '_') << endl << "\n\tMİRAS\n" << string(21, '_') << "\n\n";
	   cout << "\t--2 AY SONRA--\n\n\n";
	   Sleep(5000);
	   cout << "\t-ADAYA İLK ADIM\n\n";
	   Sleep(4000);
	   cout << "-Uzun süren hazırlıkların ardından Lee  adaya ilk adımını attı.\n\n";
	   Sleep(3000);
	   cout << "-Elinde haritası ile gitmesi gerektiği yeri gördü ve yola koyuldu.\n\n";
	   Sleep(3000);
	   cout << "-Adada bir süre ilerledikten sonra çok eski ve yırtılmış bir çadıra rastladı.\n\n";
	   Sleep(3000);
	   cout << "-Çadırın içerisinde bir iskelet ve iskeletin elinde anahtar ve bir kağıt olduğunu gördü .\n\n";
	   Sleep(3000);
	   cout << "-kağıtta bir yola benzer çizimler ve runik dilde yazılar görüyordu .\n\n";
	   Sleep(2500);
	   cout << "-Lee kağıdı ve anahtarı yanına alıp yoluna devam etti.\n\n";
	   Sleep(2500);
	   ItemKaydetme("anahtar");// anahtar ve kagit eklendi itemlere.
	   ItemKaydetme("kagit");
	   Sleep(3000);
	   cout << "-Lee Haritada işaretlenen bölgeye ulaştığında ise bir mağara fark etti.\n\n";
	   Sleep(2500);
	   cout << "-Mağaranın girişine ulaşan Lee dikkatli bir şekilde içeri giriyor.\n\n";
	   Sleep(4000);
	   cout << "-Mağarada bir süre ilerledikten sonra  bazı semboller görüyor.\n\n";
	   Sleep(2500);
	   cout << "-Bu sembollerin aynısını, iskeletin elinden aldığı kağıt parçasında da bulunduğunu gördü ve ilerlemeye devam etti.\n\n";
	   Sleep(3000);
	   cout << "-İlerlerken karşısına zeminine yerleştirimiş geniş basamaklardan oluşan büyük bir oda çıktı.\n\n";
	   Sleep(3000);
	   cout << "-Bu basamakların arasındaki boşluktan, altlarındaki  sivri demir dikenler görünüyordu.\n\n";
	   Sleep(3000);
	   cout << "-Tuzak olduğunun farkına vardı Lee.\n\n";
	   Sleep(3000);
	   cout << "-Yalnızca doğru basamaklarla karşıya geçebilirdi..\n\n";
	   Sleep(3000);
	   cout << "-Ama hangisinin doğru oldğunu bilemiyor etrafına bakıyor,  bir ipucu yok.\n\n";
	   Sleep(3000);
	   cout << "Ve tuzağı geçmekten başka seçeneğin yok.\n\n";
	   Sleep(3500);
	   system("cls");
	   cout << "\n\n--Yukarı gitmek için \"y\". Aşağı gitmek için \"a\". Sağ ve sol için \"sag\" \"sol\" kelimelerini kullanınız--\n\n";
	   Sleep(8000);
	   while (tuzakOyunuFlag == 0)
	   {
		   system("cls");
		   tuzakDiziOyunuHareket();
	   }
	   cout << "\n--Platfrom oyununu geçtin.--\n";
	   Sleep(4000);
	   BolumKaydetme('1'); 
	   Sleep(3000);
	   }
	case '1':
	 {
		system("CLS");
		cout << "\tBölüm 2";
		cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(4000);
		system("CLS");
		cout << string(21, '_') << endl << "\n\tMİRAS\n" << string(21, '_') << "\n\n";
		cout << "-Lee elinde fener ile yola kaldığı yerden devam ediyor.\n\n";
		Sleep(3000);
		cout << "-Sıkışık mağara duvarlarının arasında geçen yarım saat sonunda bir kapıya rastlıyor.\n\n";
		Sleep(3000);
		cout << "-Kapının üzerinde rünik yazılar vardı.\n\n";
		Sleep(2500);
		cout << "-Bu yazılarda iskandinav tanrıları ait semboller gördü.\n\n";
		Sleep(3000);
		cout << "-Bu semboller sırasıyla KARGA, YILDIRIM, YILAN ve TERAZİ  kelimelerinin yazıldığını gördün .\n\n";
		Sleep(5000);
		cout << "-Aynı zamanda bu sembollerin altında yan yana dizilmiş bazı heykeller gördü.\n\n";
		Sleep(3000);
		cout << "-Lee heykel ve isimleri eşleştirmesi gerektiğini anladı . 4 sembol var ama 5 heykel var.\n\n";
		Sleep(3000);
		cout << "-heykelleri sırayla yerleştirmesi gerektiğini anladı ve heykelleri doğru yerlerine yerleştirmeye koyuldu.\n\n";
		Sleep(6000);
		system("cls");
		HeykelOyunu();
		cout << "-Heykelleri yerleştirince bazı taşların yavaşça hareketlendiğini fark etti. \n\n";
		Sleep(2000);
		cout << "-5. heykel, heimdall heykeli bir mekanizma tarafından içeri çekildi  ve kapı açıldı.\n\n";
		Sleep(3000);
		cout << "-Lee büyük bir heyecanla içeri girdi ve gördüğü şey karşısında donup kaldı.\n\n";
		Sleep(2000);
		cout << "-İçeride hazineye dair hiçbir şey yoktu. Oda bomboştu\n\n";
		Sleep(2000);
		cout << "-Hazinenin ondan önce başkaları tarafından bulunduğunu düşündü ve umutsuzca ayağa kalktı\n\n";
		Sleep(2000);
		cout << "-Mağaranın içine yukarıdaki bir oyuktan güneş ışığı giriyor ve zemini aydınlatıyordu.\n\n";
		Sleep(3000);
		cout << "-Lee bu alana bakınca bir harita olduğunun farkına vardı\n\n";
		Sleep(2000);
		cout << "-Şu anda bulunduğu yerin bir hazine odası değil, bir harita olduğunun farkına varıyor\n\n";
		Sleep(2000);
		cout << "-Hazinenin yerini gösteren bir harita. \n\n";
		Sleep(3000);
		cout << "-Bu sırada 5.heykel bir sistem tarafından yavaşça haritanın ortasından yükseliyor.   \n\n";
		Sleep(3000);
		cout << "-Lee haritanın fotoğrafını çekip ve heykeli alıp mağaradan çıkıyor\n\n";
		Sleep(6000);
		ItemKaydetme("heimdall");
		BolumKaydetme('2');
	 }
	 case '2':
	 {
		system("CLS");
		cout << "\tBölüm 3"; 
		cout << "."; Sleep(100); cout << "."; Sleep(1000); cout << "."; Sleep(4000);
		system("CLS");
		cout << string(21, '_') << endl << "\n\tMİRAS\n" << string(21, '_') << "\n\n";
		cout << "-Lee belli bir süre sonra diğer adaya doğru yola çıktı.\n\n";
		Sleep(3000);
		cout << "-Adaya ulaştı ve işaret edilen noktaya doğru yola koyuldu.\n\n";
		Sleep(3000);
		cout << "-Lee saatler süren yürüyüşün ardından bir uçuruma denk geldi.\n\n";
		Sleep(3000);
		cout << "-Karşıya geçebilmesinin tek yolu tırmanmaktı .\n\n";
		Sleep(4000);
		ZamanAyarliHareketOyunu();
		cout << "-Tırmandın ve yavaşça yukarı çıktın.\n\n";
		Sleep(3000);
		cout << "-Lee bölgeye geldiğinde hemen çalışmaya başladı.\n\n";
		Sleep(3000);
		cout << "-Bölgede araştırmalar yaptı ve derinlere doğru kazmaya başladı.\n\n";
		Sleep(3000);
		cout << "-Ancak birkaç gün boyunca hiçbir şey bulamadı\n\n";
		Sleep(3000);
		cout << "-Birkaç günün sonunda zeminde bir kapı buldu ,.\n\n";
		Sleep(3000);
		cout << "-Kapının üstünde iskandinav tanrılarına ait resimler vardı.\n\n";
		Sleep(3000);
		cout << "-kapıyı açınca aşağı doğru inen merdivenleri gördü ve aşağı indi. \n\n";
		Sleep(3000);
		cout << "-burası bir doğal oluşum değildi, bir mağara değildi. Elle oyulmuş üs gibiydi.\n\n";
		Sleep(3000);
		cout << "-Lee içeriyi aydınlatmak için duvardaki meşalelerden birini aldı ama bir ses geldi.\n\n";
		Sleep(3000);
		cout << "-Üstünde durduğu taş bloklarının hareketlendiğini hissetti.\n\n";
		Sleep(3000);
		cout << "-Altında bir platform açıldı ve içine düştü\n\n";
		Sleep(3000);
		cout << "-Etrafındaki duvarlara bakınca bir labiretnnte olduğunu anladı\n\n";
		Sleep(3000);
		cout << "-Burdan çıkmak için tek yok buydu\n\n";
		Sleep(3000);
		cout << "\n\n--Yukarı gitmek için \"y\". Aşağı gitmek için \"a\". Sağ ve sol için \"sag\" \"sol\" kelimelerini kullanınız--\n\n";
		Sleep(8000);
		LabirentOyunu();
		cout << "-(Lee labirentten çıktı ve karşısında küçük bir heykel gördü.)\n\n";
		Sleep(3000);
		cout << "-(Bu heykeli alıp yola devam etti )\n\n";
		Sleep(3000);
		ItemKaydetme("thor");
		cout << "-Lee belli bir süre ilerledikten sonra kendini bir uçurumun kenarında buldu.)\n\n";
		Sleep(3000);
		cout << "-Karşıya geçen köprü yıkılmış. ilerlemenin tek yolu tırmanmak)\n\n";
		Sleep(3000);
		ZamanAyarliHareketOyunu();
		cout << "-Lee tırmandıktan sonra yorgundu ve o gece kamp kurdu.)\n\n";
		Sleep(6000);
		 BolumKaydetme('3');
	 }
	 case '3':
	 {
		 ofstream dosya("itemler.txt");
		 dosya << "kagit=1#heykelthor=1#heykelheimdall=1#anahtar=1#";
		 dosya.close();
		 system("CLS");
		 cout << "\tBölüm 4";
		 cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(4000);
		 system("CLS");
		 cout << string(21, '_') << endl << "\n\tMİRAS\n" << string(21, '_') << "\n\n";
		 cout << "-Ertesi sabah Lee toplanıp kaldığı yerden devam etti.\n\n";
		 Sleep(3000);
		 cout << "-İlerledi ve sonunda bir kapıdan geçerek odaya girdi.\n\n";
		 Sleep(3000);
		 cout << "-Karşısında ise büyük parlayan bir kapı belirdi.\n\n";
		 Sleep(3000);
		 cout << "-Kapıya doğru yürüdü ve yaklaşık 1 metre boyunda  2 dikili taş gördü.\n\n";
		 Sleep(3000);
		 cout << "-Ve o taşların birinin üzerinde gökkuşağı diğerin üzerinde yıldırım şeklinin olduğunu gördü \n\n";
		 Sleep(3000);
		 cout <<"-Dikili taşların üzerinde bazı oymalar vardı.\n\n";
		 Sleep(3000);
		 cout << "-Bu oymalar ve bulduğu heykellerin taban kısımlarının uyumlu olduğunun farkına vardı Lee.\n\n";
		 Sleep(3000);
	     cout << "-Kendisinde bulunan heykelleri alıp yerlerine yerleştirmeye koyuldu.\n\n";
		 Sleep(6000);
		 FinalHeykelOyunu();
		 cout << "-Kapı yavaşça açılırken, içeriden gözleri kamaştıran ışık hüzmeleri yayılıyordu.\n\n";
		 Sleep(3000);
		 cout << "-Lee odaya ilk adımını attı ve karşısında bir dağı andırırcasına duran altın ve gümüşler gördü. \n\n";
		 Sleep(3000);
		 cout << "-Lee gözyaşlarına hakim olamadı.\n\n";
		 Sleep(3000);
		 cout << "-Gözlerinden süzülen her bir damla, cesaretin, azmin ve kararlılığın resmiydi.\n\n";
		 Sleep(3000);
		 cout << "-Bu gözyaşları, ailesinin yarım kalan işini tamamlamanın verdiği gururun damlalarıydı.  .\n\n";
		 Sleep(5000);
		 cout << "-Sırtını duvara yasladı ve gözlerini kapattı.\n\n";
		 Sleep(3000);
		 cout << "- Yarım kalan bu mirası tamamlanın verdiği gururu ve tadı hissetmeye koyuldu.\n\n";
		 Sleep(3000);
		 cout << "- Bu miras onun için bir son değil, bir başlangıçtı...\n\n";
		 Sleep(7000);
		 cout << "\t- SON -.\n\n";
		 Sleep(5000);
		 system("cls");
		 
		 
	 }
	}
}
void BolumKaydetme(char save)
{
	system("cls");
	ofstream saveDosya("save.txt");
	saveDosya << save;
	saveDosya.close();
	cout << "\t--Bölüm kaydedildi--";
	Sleep(3000);
	system("cls");
}
char BolumKayitCekme()
{
	char kayit;
	ifstream kayitCekme("save.txt", ios::in);
	/*if (kayitCekme.fail())
	{
		return 0;
	}*/
	kayitCekme >> kayit;
	kayitCekme.close();
	return kayit;
}
void ItemKaydetme(string kaydedilenItem)
{
	//dosyadan okuyup diziye atıcaz 
	string dosyayaYazma;
	string itemler[4];
	ifstream kayitOkuma("itemler.txt", ios::in);
	for (int i = 0; i < 4; i++)
	{
		getline(kayitOkuma, itemler[i], '#');
	}
	if (kaydedilenItem == "kagit" && itemler[0] == "kagit=0")
	{
		itemler[0] = "kagit=1";
		cout << "\n\n-- \"kagit\" itemi envantere eklendi.-- \n\n";
		Sleep(2000);
	}
	else if (kaydedilenItem == "thor" && itemler[1] == "heykelthor=0")
	{
		itemler[1] = "heykelthor=1";
		cout << "\n\n-- \"thor heykeli\" itemi envantere eklendi.-- \n\n";
		Sleep(2500);
	}
	else if (kaydedilenItem == "heimdall" && itemler[2] == "heykelheimdall=0")
	{
		itemler[2] = "heykelheimdall=1";
		cout << "\n\n-- \"heimdall heykeli\" itemi envantere eklendi.-- \n\n";
		Sleep(2500);
	}
	else if (kaydedilenItem == "anahtar" && itemler[3] == "anahtar=0")
	{
		itemler[3] = "anahtar=1";
		cout << "\n\n-- \"anahtar\" envantere eklendi.-- \n\n";
		Sleep(2500);
	}
	for (int i = 0; i < 4; i++)
	{
		dosyayaYazma += itemler[i] + '#';
	}
	ofstream itemKayit("itemler.txt");
	itemKayit << dosyayaYazma;
	itemKayit.close();
}
void ItemCikarma(string cikarilanItem)
{
	string dosyayaYazma;
	string itemler[4];
	ifstream kayitOkuma("itemler.txt", ios::in);
	for (int i = 0; i < 4; i++)
	{
		getline(kayitOkuma, itemler[i], '#');
	}
	if (cikarilanItem == "kagit" && itemler[0] == "kagit=1")
	{
		itemler[0] = "kagit=0";
		cout << "\n\n-- \"kagit\" itemi envanterinizden çıkarıldı.-- \n\n";
		Sleep(2500);
	}
	else if (cikarilanItem == "thor" && itemler[1] == "heykelthor=1")
	{
		itemler[1] = "heykelthor=0";
		cout << "\n\n-- \"thor heykeli\" itemi envanterinizden çıkarıldı.-- \n\n";
		Sleep(2500);
	}
	else if (cikarilanItem == "heimdall" && itemler[2] == "heykelheimdall=1")
	{
		itemler[2] = "heykelheimdall=0";
		cout << "\n\n-- \"heimdall heykeli\" itemi envanterinizden çıkarıldı.-- \n\n";
		Sleep(2500);
	}
	else if (cikarilanItem == "anahtar" && itemler[3] == "anahtar=1")
	{
		itemler[3] = "anahtar=0";
		cout << "\n\n-- \"anahtar\" itemi envanterinizden çıkarıldı.-- \n\n";
		Sleep(2500);
	}
	for (int i = 0; i < 4; i++)
	{
		dosyayaYazma += itemler[i] + '#';
	}
	ofstream itemKayit("itemler.txt");
	itemKayit << dosyayaYazma;
	itemKayit.close();
}
string ItemleriEkranaYazmaVeSecim()
{
	int cikma;
	string istenenItem;
	string itemlerimiz[4];
	ifstream okuma("itemler.txt", ios::in);
	for (int i = 0; i < 4; i++)
	{
		getline(okuma, itemlerimiz[i], '#');
	}
	while (true)
	{
		cout << "Itemleriniz:\n\n";

		if (itemlerimiz[0] == "kagit=1")
		{
			cout << "-- kagit\n\n";
		}
		else if (itemlerimiz[0] == "kagit=0")
		{
			itemlerimiz[0].clear();
		}
		if (itemlerimiz[1] == "heykelthor=1")
		{
			cout << "-- thor heykeli\n\n";
		}
		else if (itemlerimiz[1] == "heykelthor=0")
		{
			itemlerimiz[1].clear();
		}
		if (itemlerimiz[2] == "heykelheimdall=1")
		{
			cout << "-- heimdall heykeli\n\n";
		}
		else if (itemlerimiz[2] == "heykelheimdall=0")
		{
			itemlerimiz[2].clear();
		}
		if (itemlerimiz[3] == "anahtar=1")
		{
			cout << "-- anahtar\n\n";
		}
		else if (itemlerimiz[3] == "anahtar=0")
		{
			itemlerimiz[3].clear();
		}
		if (itemlerimiz[0].empty() == 1 && itemlerimiz[1].empty() == 1 && itemlerimiz[2].empty() == 1 && itemlerimiz[3].empty() == 1)
		{
			cout << "Iteminiz bulunmamaktadir.";
			Sleep(4000);
			return "0";
		}
		cout << "secmek istediginiz itemin ismini tam giriniz \n\nGeri gitmek icin \"geri\" yaziniz: ";
		getline(cin, istenenItem);
		system("Cls");

		if (istenenItem == "kagit")
		{
			int tuzakDizi[14][7] =
			{
			 { 0,1,0,0,0,0,0},
			 { 0,1,0,1,1,1,0},
			 { 0,1,1,1,0,1,0},
			 { 0,0,0,0,1,1,0},
			 { 0,0,1,1,1,0,0},
			 { 0,1,1,0,0,0,0},
			 { 0,1,0,0,0,0,0},
			 { 0,1,1,1,1,0,0},
			 { 0,0,0,0,1,1,0},
			 { 0,0,0,0,0,1,0},
			 { 0,0,0,1,1,1,0},
			 { 0,0,0,1,0,0,0},
			 { 0,0,1,1,0,0,0},
			 { 3,3,2,3,3,3,3},

			};
			for (int i = 0; i < 14; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					if (tuzakDizi[i][j] == 0)
					{
						cout << " X ";
					}
					else if (tuzakDizi[i][j] == 1)
					{
						cout << " - ";
					}
				}
				cout << endl;
			}
			cout << "\nkarga   yıldırım     yılan    terazi\n\n";
			cout << "  odin      thor       loki        tyr \n\n";
			cout << "kagida bakmak icin 5 saniyen var.";
			Sleep(5000);
			system("cls");
			cout << "itemlerden çıkılıyor.";
			Sleep(2000);
			system("cls");
			return "0";
		}
		else if (istenenItem == "thor heykeli")
		{
			cout << "thor heykeli  secildi.\n";
			Sleep(3000);
			return "thor";
			system("cls");
		}
		else if (istenenItem == "heimdall heykeli")
		{
			cout << "heimdall heykeli  secildi.\n";
			Sleep(3000);
			return "heimdall";
			system("cls");
		}
		else if (istenenItem == "anahtar")
		{
			cout << "anahtar secildi.\n";
			Sleep(3000);
			return "anahtar";
			system("cls");
		}
		else if (istenenItem == "geri")
		{
			cout << "itemlerden cikiliyor.";
			Sleep(2000);
			system("cls");
			return "0";
		}
		system("cls");
	}
	return "0";
}
void tuzakDiziOyunuHarita(int platfromOyunu[][7])
{
	for (int i = 0; i < 14; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (platfromOyunu[i][j] == 0 || platfromOyunu[i][j] == 1)
			{
				cout << " X ";
			}
			else if (platfromOyunu[i][j] == 2)
			{
				cout << " L ";
			}
			else if (platfromOyunu[i][j] == 3)
			{
				cout << "   ";
			}
			else if (platfromOyunu[i][j] == 6)
			{
				cout << " - ";
			}
		}
		cout << endl;
	}
}
void tuzakDiziOyunuHareket()
{
	int tuzakDizi[14][7] =
	{
	 { 0,1,0,0,0,0,0},
	 { 0,1,0,1,1,1,0},
	 { 0,1,1,1,0,1,0},
	 { 0,0,0,0,1,1,0},
	 { 0,0,1,1,1,0,0},
	 { 0,1,1,0,0,0,0},
	 { 0,1,0,0,0,0,0},
	 { 0,1,1,1,1,0,0},
	 { 0,0,0,0,1,1,0},
	 { 0,0,0,0,0,1,0},
	 { 0,0,0,1,1,1,0},
	 { 0,0,0,1,0,0,0},
	 { 0,0,1,1,0,0,0},
	 { 3,3,2,3,3,3,3},

	};
	int karakterKordinatY = 13, karakterKordinatX = 2;
	string yon;
	tuzakDiziOyunuHarita(tuzakDizi);
	cout << "itemlere erişmek için \"itemler\" yazabilirsiniz.\n";
	cout << "işlemi giriniz gir:";
	cin >> yon;
	int geciciY = karakterKordinatY, geciciX = karakterKordinatX;
	while (tuzakDizi[karakterKordinatY][karakterKordinatX] != 5)
	{

		geciciY = karakterKordinatY, geciciX = karakterKordinatX;

		if (yon == "y" && tuzakDizi[karakterKordinatY - 1][karakterKordinatX] == 1)
		{
			tuzakDizi[geciciY - 1][karakterKordinatX] = tuzakDizi[karakterKordinatY][karakterKordinatX];
			tuzakDizi[karakterKordinatY][karakterKordinatX] = 6;
			geciciY--;
			karakterKordinatY = geciciY;
			system("CLS");

			tuzakDiziOyunuHarita(tuzakDizi);
		}
		else if (yon == "y" && tuzakDizi[karakterKordinatY - 1][karakterKordinatX] == 0 || yon == "sag" && tuzakDizi[karakterKordinatY][karakterKordinatX + 1] == 0 || yon == "sol" && tuzakDizi[karakterKordinatY][karakterKordinatX - 1] == 0 || yon == "a" && tuzakDizi[karakterKordinatY + 1][karakterKordinatX] == 0)
		{
			cout << "\tTuzaga bastin ve oldun.\n";
			Sleep(3000);
			cout << "\tTekrar Basliyor...\n";
			Sleep(2000);
			system("cls");
			tuzakOyunuFlag = 0;
			break;
		}
		else if (yon == "sag" && tuzakDizi[karakterKordinatY][karakterKordinatX + 1] == 1)
		{
			tuzakDizi[karakterKordinatY][geciciX + 1] = tuzakDizi[karakterKordinatY][karakterKordinatX];
			tuzakDizi[karakterKordinatY][karakterKordinatX] = 6;
			geciciX++;
			karakterKordinatX = geciciX;
			system("CLS");
			tuzakDiziOyunuHarita(tuzakDizi);
			geciciY = karakterKordinatY;
		}

		else if (yon == "sol" && tuzakDizi[karakterKordinatY][karakterKordinatX - 1] == 1)
		{
			tuzakDizi[karakterKordinatY][geciciX - 1] = tuzakDizi[karakterKordinatY][karakterKordinatX];
			tuzakDizi[karakterKordinatY][karakterKordinatX] = 6;
			geciciX--;
			karakterKordinatX = geciciX;
			system("CLS");
			tuzakDiziOyunuHarita(tuzakDizi);
			geciciY = karakterKordinatY;
		}
		else if (yon == "a" && tuzakDizi[karakterKordinatY + 1][karakterKordinatX] == 1)
		{
			tuzakDizi[geciciY + 1][karakterKordinatX] = tuzakDizi[karakterKordinatY][karakterKordinatX];
			tuzakDizi[karakterKordinatY][karakterKordinatX] = 6;
			geciciY++;
			karakterKordinatY = geciciY;
			system("CLS");
			tuzakDiziOyunuHarita(tuzakDizi);
		}
		else if (yon == "sag" && tuzakDizi[karakterKordinatY][karakterKordinatX + 1] == 3)
		{
			tuzakDizi[karakterKordinatY][geciciX + 1] = tuzakDizi[karakterKordinatY][karakterKordinatX];
			tuzakDizi[karakterKordinatY][karakterKordinatX] = 3;
			geciciX++;
			karakterKordinatX = geciciX;
			system("CLS");
			tuzakDiziOyunuHarita(tuzakDizi);
			geciciY = karakterKordinatY;
		}
		else if (yon == "sol" && tuzakDizi[karakterKordinatY][karakterKordinatX - 1] == 3)
		{
			tuzakDizi[karakterKordinatY][geciciX - 1] = tuzakDizi[karakterKordinatY][karakterKordinatX];
			tuzakDizi[karakterKordinatY][karakterKordinatX] = 3;
			geciciX--;
			karakterKordinatX = geciciX;
			system("CLS");
			tuzakDiziOyunuHarita(tuzakDizi);
			geciciY = karakterKordinatY;
		}
		else if (yon=="itemler")
		{
			ItemleriEkranaYazmaVeSecim();
		}
		if (tuzakDizi[0][1] == 2) //  hedefe ulaşsa dahi son defa yön istiyor ,bu if şartı  son defa yön istemesini engelliyor.
		{
			cout << "tuzaktan kactin!!!!!\n";
			tuzakOyunuFlag = 1;
			break;
		}
		system("CLS");
		tuzakDiziOyunuHarita(tuzakDizi);
		cout << "itemler için \"itemler\" yazabilirsiniz.\nyeni yön: ";
		cin >> yon;
	}
}
void HeykelOyunu()
{
	string Semboller[2][5] =
	{
		/*{"karga","yıldırım","yılan","terazi" },   doğru sıralama bu şekilde
		{ "odin",  "thor",   "loki", "tyr" }*/
		{"karga","yıldırım","yılan","terazi" },
		{ "loki",  "tyr", "thor", "odin","heimdall"}
	};
	string secilen, degistirilen;
	int secilenIndis, degistirilenIndis;
	while (true)
	{
		if (Semboller[1][0] == "odin" && Semboller[1][1] == "thor" && Semboller[1][2] == "loki" && Semboller[1][3] == "tyr")
		{
			break;
		}
		cout << "Semboller: ";
		for (int j = 0; j < 4; j++)
		{
			cout << Semboller[0][j] << "   ";
		}
		cout << "\n\n";
		cout << "Heykeller: ";
		for (int j = 0; j < 5; j++)
		{
			cout  << Semboller[1][j] << "      ";
		}
		cout << "\n\nİtemlere erişmek için \"itemler\" yazınız.\n\n";
		cout << "seçeceğiniz heykel:\n";
		cin >> secilen;
		if (secilen == "itemler")
		{
			ItemleriEkranaYazmaVeSecim();
			cout << "Semboller: ";
			for (int j = 0; j < 4; j++)
			{
				cout  << Semboller[0][j] << "   ";
			}
			cout << "\n\n";
			cout << "Heykeller: ";
			for (int j = 0; j < 5; j++)
			{
				cout  << Semboller[1][j] << "      ";
			}
			cout << "seçeceğiniz heykel:";
			cin >> secilen;
		}
		cout << "Değiştireceğiniz heykel:";
		cin >> degistirilen;
		for (int i = 0; i < 5; i++)
		{
			if (Semboller[1][i].compare(secilen) == 0)
			{
				secilenIndis = i;
			}
			if (Semboller[1][i].compare(degistirilen) == 0)
			{
				degistirilenIndis = i;
			}
		}
		if ((secilen == "loki" || secilen == "odin" || secilen == "thor" || secilen == "tyr"||secilen=="heimdall") && (degistirilen == "loki" || degistirilen == "odin" || degistirilen == "thor" || degistirilen == "tyr") || degistirilen=="heimdall")
		{
			Semboller[1][secilenIndis].swap(Semboller[1][degistirilenIndis]);
		}
		system("cls");
	}
}
void ZamanAyarliHareketOyunu()
{
	cout << "---Kayalara sadece doğru tuşla tutunabilirsin---.\n\n";
	cout << "---kayalara tutunmak için 1 saniyen var---.\n\n";
	cout << "---hızlı olamazsan ölürsün...---";
	Sleep(8000);
	system("cls");
	srand(time(NULL));
	string alfabe = "stgdjaeoprcxawpvuxbi";
	char hedefKarakter;
	char karakter = '0';
	int hedefOyunSayisi = 10;
	clock_t baslangic, bitis;
	while (hedefOyunSayisi != 0)
	{
		while (true)
		{
			hedefKarakter = alfabe[rand() % 20];
			cout << "Kayaya tutunmak için \"" << hedefKarakter << "\" tuşuna bas:";
			baslangic = clock();
			cin.ignore() >> karakter;
			bitis = clock();
			if ((float)(bitis - baslangic) / CLOCKS_PER_SEC < 1 && karakter == hedefKarakter)
			{
				cout << "Başardın!!\n";
				cout << "Tekrar zıplaman gerekiyor\n";
				cout << "tepki süren: " << (float)(bitis - baslangic) / CLOCKS_PER_SEC << "\n";
				Sleep(2000);
				system("cls");
				break;
			}
			else
			{
				cout << "\nÖLDÜN!!!\n";
				cout << "tepki süren: " << (float)(bitis - baslangic) / CLOCKS_PER_SEC << "\n";
				if ((float)(bitis - baslangic) / CLOCKS_PER_SEC > 1)
				{
					cout << "Çok yavaşsın!!\n";
					Sleep(2000);
				}
				else if (hedefKarakter != karakter)
				{
					cout << "Yanlış tuşa bastın!!\n";
					Sleep(2000);
				}
				cout << "Oyun tekrar başlıyor...";
				Sleep(2000);
				system("cls");
				hedefOyunSayisi = 7;
			}
		}
		hedefOyunSayisi--;
	}
}
void LabirentOyunu()
{
	system("cls");
	int labirent[12][30]
	{ 
							{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0},
							{0,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0},
							{0,0,1,0,1,0,0,0,1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1,0},
							{0,0,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,1,0,1,1,1,1,1,1,0,1,0,1,0},
							{0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0},
							{0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,1,1,1,1,1,0,0,1,0,0,0},
							{0,1,1,1,1,1,1,1,1,0,1,0,0,0,1,0,0,1,0,1,0,0,0,1,1,0,1,1,1,0},
							{0,1,0,0,1,0,0,0,1,0,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,1,0},
							{0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1,1,1,0,1,0},
							{0,1,0,0,1,1,1,0,1,0,0,0,1,1,1,1,1,1,0,0,1,0,0,1,0,0,0,0,1,0},
							{0,3,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,1,1,1,1,0,1,1,1,1,1,1,1,0},
							{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
	};
	string yon;
	LabirentHarita(labirent);
	cout << "yon gir:";
	cin >> yon;
	int karakterKordinatX, karakterKordinatY;
	cout << endl;
	karakterKordinatY = 10, karakterKordinatX = 1;
	int geciciY = karakterKordinatY, geciciX = karakterKordinatX;
	while (labirent[karakterKordinatY - 1][karakterKordinatX] != 2)
	{
		geciciY = karakterKordinatY, geciciX = karakterKordinatX;

		if (yon == "y" && labirent[karakterKordinatY - 1][karakterKordinatX] == 1)
		{
			while (labirent[geciciY - 1][karakterKordinatX] != 0)
			{
				labirent[geciciY - 1][karakterKordinatX] = labirent[karakterKordinatY][karakterKordinatX];
				labirent[karakterKordinatY][karakterKordinatX] = 1;
				geciciY--;
				karakterKordinatY = geciciY;
				system("CLS");
				LabirentHarita(labirent);
				Sleep(3000);
			}
		}
		else if (yon == "sag" && labirent[karakterKordinatY][karakterKordinatX + 1] == 1) {

			while (labirent[karakterKordinatY][geciciX + 1] != 0)
			{
				labirent[karakterKordinatY][geciciX + 1] = labirent[karakterKordinatY][karakterKordinatX];
				labirent[karakterKordinatY][karakterKordinatX] = 1;
				geciciX++;
				karakterKordinatX = geciciX;
				system("CLS");
				LabirentHarita(labirent);
				Sleep(3000);
			}
			geciciY = karakterKordinatY;
		}
		else if (yon == "sol" && labirent[karakterKordinatY][karakterKordinatX - 1] == 1)
		{

			while (labirent[karakterKordinatY][geciciX - 1] != 0)
			{
				labirent[karakterKordinatY][geciciX - 1] = labirent[karakterKordinatY][karakterKordinatX];
				labirent[karakterKordinatY][karakterKordinatX] = 1;
				geciciX--;
				karakterKordinatX = geciciX;
				system("CLS");
				LabirentHarita(labirent);
				Sleep(3000);
			}
			geciciY = karakterKordinatY;
		}
		else if (yon == "a" && labirent[karakterKordinatY + 1][karakterKordinatX] == 1)
		{
			while (labirent[geciciY + 1][karakterKordinatX] != 0)
			{
				labirent[geciciY + 1][karakterKordinatX] = labirent[karakterKordinatY][karakterKordinatX];
				labirent[karakterKordinatY][karakterKordinatX] = 1;
				geciciY++;
				karakterKordinatY = geciciY;
				system("CLS");
				LabirentHarita(labirent);
				Sleep(3000);
			}
		}
		if (labirent[karakterKordinatY - 1][karakterKordinatX] == 2) //  hedefe ulaşsa dahi son defa yön istiyor ,bu if şartı  son defa yön istemesini engelliyor.
		{
			cout << "Labirentten kactin!!!!! ";
			break;
		}
		system("CLS");
		LabirentHarita(labirent);
		cout << "yeni yon:";
		cin >> yon;
	}
};
void LabirentHarita(int labirent[][30])
{
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (labirent[i][j] == 0)
			{
				cout << "*";
			}
			else if (labirent[i][j] == 1)
			{
				cout << " ";
			}
			else if (labirent[i][j] == 2)
			{
				cout << "X";
			}
			else if (labirent[i][j] == 3)
			{
				cout << "L";
			}
			cout << " ";
		}cout << endl;
	}
}
void FinalHeykelOyunu()
{
	system("cls");
	string secilenItem, secilenSembol;
	string sembol[2][2] =
	{
		{ "gokkusagi","yildirim" },
		{"--------","--------"}

	};

		for (int i = 0; i < 2; i++)
		{
			cout << sembol[0][i] << "    ";
		}
		cout << "\n\n";
		for (int i = 0; i < 2; i++)
		{
			cout << sembol[1][i] << "     ";
		}
		cout << "\n\n";
		Sleep(3000);
		cout << "Heykelleri doğru sembole yerleştir.\n\n";
		Sleep(3000);
		system("cls");
		while ( true) //sembol[1][0] != "heimdall" && sembol[1][1] != "thor" bu şartı while kabul etmiyor bu yüzden while içine kısmına ayrı bir şart koymam lazım
		{
			if (sembol[1][0] == "heimdall" && sembol[1][1] == "thor")
			{
				break;
			}
			if (sembol[1][0] == "thor" && sembol[1][1] == "heimdall")
			{
				cout << "\nHeykelleri yerleştirdin ama bir şey olmadı.Sanırım yanlış yerleştirdin.\n\n";
				cout << "Heykelleri geri aldın ve tekrar yerleştiriyorsun.\n\n";
				Sleep(50);
				sembol[1][0] = "--------";
				sembol[1][1] = "--------";
				ItemKaydetme("thor");
				ItemKaydetme("heimdall");
			}
			while (true)
			{
				secilenItem = ItemleriEkranaYazmaVeSecim();
				if (secilenItem != "0")
				{
					break;
				}
			}
			system("cls");
			if (secilenItem == "thor")
			{
				ItemCikarma("thor");

			}
			else if (secilenItem == "heimdall")
			{
				ItemCikarma("heimdall");
			}
			else if (secilenItem == "anahtar")
			{
				cout << "anahtar buraya uygun bir seçim değil.";
				Sleep(3500);
				system("cls");
				while (true)
				{
					secilenItem = ItemleriEkranaYazmaVeSecim();
					if (secilenItem != "0")
					{
						break;
					}
				}
			}
			system("cls");
			for (int i = 0; i < 2; i++)
			{
				cout << sembol[0][i] << "    ";
			}
			cout << "\n\n";
			for (int i = 0; i < 2; i++)
			{
				cout << sembol[1][i] << "     ";
			}
			cout << "\n\n";
			while (true)
			{
				cout << secilenItem << " itemini hangi sembolün altına koymak istiyorsunuz :";
				cin >> secilenSembol;
				if (secilenSembol == sembol[0][0] || secilenSembol == sembol[0][1])
				{
					break;
				}
				system("cls");
			}
            if (secilenSembol == "gokkusagi")
			{
				sembol[1][0] = secilenItem;
				
			}
			else if (secilenSembol == "yildirim")
			{
				sembol[1][1] = secilenItem;
			}
		}
		cout << "\n\nHeykelleri doğru yerleştirdin!!\n\n";
		Sleep(3000);
		cout << "kapı hareketleniyor ve bir anahtar deliği ortaya çıkıyor.\n\n";
		Sleep(3000);
		cout << "bu anahtar önceden bulduğun anahtarla benzer\n\n";
		Sleep(3000);
		do
		{
			secilenItem = ItemleriEkranaYazmaVeSecim();

		} while (secilenItem !="anahtar");
		ItemCikarma("anahtar");
		system("cls");
        cout << "Anahtarı deliğe koydun ve açıldı.\n\n";
		Sleep(5000);
		
}




