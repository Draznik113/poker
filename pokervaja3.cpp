#include <iostream>
using namespace std;
void vizitka_pograma();
int main ()
{
	for (;;)
	{
	int a;  // Vaše karte
	int b;  // Nasprotnikove karte
	vizitka_pograma();
	
    cout<< " 1.AA   "<< " 6.KK   "<<" 10.QQ    "<<" 13.JJ   "<<" 15.1010 "<<endl;      // Izbira vaših kart
    cout<< " 2.AK   "<< " 7.KQ   "<<" 11.QJ    "<<" 14.J10  "<<endl;
    cout<< " 3.AQ   "<< " 8.KJ   "<<" 12.Q10   "<<endl;
    cout<< " 4.AJ   "<< " 9.K10  "<<endl;
    cout<< " 5.A10  "<<endl;
    
	do{
	cout<< "Vnesite vase karte z ustrezno stevilko: ";
	cin >> a;
         } while ( a < 1 || a > 15 );
   
	
	    if (a==1)
        cout << "Vase karte so: AA " << endl;
        if (a==2)
        cout << "Vase karte so: AK " << endl;
        if (a==3)
        cout << "Vase karte so: AQ " << endl;
        if (a==4)
        cout << "Vase karte so: AJ " << endl;
        if (a==5)
        cout << "Vase karte so: A10 " << endl;
        if (a==6)
        cout << "Vase karte so: KK " << endl;
        if (a==7)
        cout << "Vase karte so: KQ " << endl;
        if (a==8)
        cout << "Vase karte so: KJ " << endl;
        if (a==9)
        cout << "Vase karte so: K10 " << endl; 
        if (a==10)
        cout << "Vase karte so: QQ " << endl;
        if (a==11)
        cout << "Vase karte so: QJ " << endl;
        if (a==12)
        cout << "Vase karte so: Q10 " << endl; 
        if (a==13)
        cout << "Vase karte so: JJ " << endl;
        if (a==14)
        cout << "Vase karte so: J10 " << endl;      
        if (a==15)
        cout << "Vase karte so: 1010 " << endl;
       
        
    
     cout<<endl;

    cout<< " 1.AA   "<< " 6.KK   "<<" 10.QQ    "<<" 13.JJ   "<<" 15.1010 "<<endl;      // Izbira nasprotnikovih kart
    cout<< " 2.AK   "<< " 7.KQ   "<<" 11.QJ    "<<" 14.J10  "<<endl;
    cout<< " 3.AQ   "<< " 8.KJ   "<<" 12.Q10   "<<endl;
    cout<< " 4.AJ   "<< " 9.K10  "<<endl;
    cout<< " 5.A10  "<<endl;
	do{
	cout<< "Vnesite nasprotnikove karte z ustrezno stevilko: ";
	cin >> b;
         } while ( b < 1 || b > 15 );
	
	     if (b==1)
        cout << "Nasprotnikove karte so: AA " << endl;
        if (b==2)
        cout << "Nasprotnikove karte so: AK " << endl;
        if (b==3)
        cout << "Nasprotnikove karte so: AQ " << endl;
        if (b==4)
        cout << "Nasprotnikove karte so: AJ " << endl;
        if (b==5)
        cout << "Nasprotnikove karte so: A10 " << endl;
        if (b==6)
        cout << "Nasprotnikove karte so: KK " << endl;
        if (b==7)
        cout << "Nasprotnikove karte so: KQ " << endl;
        if (b==8)
        cout << "Nasprotnikove karte so: KJ " << endl;
        if (b==9)
        cout << "Nasprotnikove karte so: K10 " << endl; 
        if (b==10)
        cout << "Nasprotnikove karte so: QQ " << endl;
        if (b==11)
        cout << "Nasprotnikove karte so: QJ " << endl;
        if (b==12)
        cout << "Nasprotnikove karte so: Q10 " << endl; 
        if (b==13)
        cout << "Nasprotnikove karte so: JJ " << endl;
        if (b==14)
        cout << "Nasprotnikove karte so: J10 " << endl;      
        if (b==15)
        cout << "Nasprotnikove karte so: 1010 " << endl;
        
        
if ((a==1) && (b==1))         // Če imate AA
        {           
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl;
        }
        else if ((a==1) && (b==2 || b==3 || b==4 || b==5)) {
        cout<< "Vase moznosti za: \nZmago: 90%\nPoraz: 8% \nIzenacenje: 2%"<<endl;
        }
        else if ((a==1) && (b==7 || b==8 || b==9 || b==11 || b==12 || b==14)) {
        cout<< "Vase moznosti za: \nZmago: 85%\nPoraz: 14% \nIzenacenje: 1%"<<endl;
        }
         else if ((a==1) && (b==6 || b==10 || b==13 || b==15)) {
        cout<< "Vase moznosti za: \nZmago: 80%\nPoraz: 19% \nIzenacenje: 1%"<<endl;
        }


if ((a==6) && (b==6))      // Če imate KK
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==6) && (b==7 || b==8 || b==9)) {
        cout<< "Vase moznosti za: \nZmago: 90%\nPoraz: 8% \nIzenacenje: 2%"<<endl; //Proti eni karti z isto in eni z manjšo vrednostjo
        }
        else if ((a==6) && (b==11 || b==12 || b==14)) {
        cout<< "Vase moznosti za: \nZmago: 85%\nPoraz: 14% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z manjšo vrednostjo
        }
         else if ((a==6) && (b==10 || b==13 || b==15)) {
        cout<< "Vase moznosti za: \nZmago: 80%\nPoraz: 19% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
          else if ((a==6) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 19%\nPoraz: 80% \nIzenacenje: 1%"<<endl; // Proti večjemu paru
        }
          else if ((a==6) && (b==3 || b==4 || b==5)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 29% \nIzenacenje: 1%"<<endl; // Proti eni karti z večjo vrednostjo in eni z manjšo
        }
         else if ((a==6) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 29% \nIzenacenje: 1%"<<endl; // Proti eni karti z večjo in eni z enako vrednostjo
        }


if ((a==10) && (b==10))      // Če imate QQ
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==10) && (b==11 || b==12)) {
        cout<< "Vase moznosti za: \nZmago: 90%\nPoraz: 8% \nIzenacenje: 2%"<<endl; //Proti eni karti z isto in eni z manjšo vrednostjo
        }
        else if ((a==10) && (b==14)) {
        cout<< "Vase moznosti za: \nZmago: 85%\nPoraz: 14% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z manjšo vrednostjo
        }
         else if ((a==10) && (b==13 || b==15)) {
        cout<< "Vase moznosti za: \nZmago: 80%\nPoraz: 19% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
          else if ((a==10) && (b==1 || b==6)) {
        cout<< "Vase moznosti za: \nZmago: 19%\nPoraz: 80% \nIzenacenje: 1%"<<endl; // Proti večjemu paru
        }
          else if ((a==10) && (b==4 || b==5 || b==8 || b==9)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 29% \nIzenacenje: 1%"<<endl; // Proti eni karti z večjo vrednostjo in eni z manjšo
        }
         else if ((a==10) && (b==3 || b==7)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 29% \nIzenacenje: 1%"<<endl; // Proti eni karti z večjo in eni z enako vrednostjo
        }
        else if ((a==10) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 55%\nPoraz: 44% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z večjo vrednostjo
        }



if ((a==13) && (b==13))      // Če imate JJ
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==13) && (b==14)) {
        cout<< "Vase moznosti za: \nZmago: 90%\nPoraz: 8% \nIzenacenje: 2%"<<endl; //Proti eni karti z isto in eni z manjšo vrednostjo
        }
         else if ((a==13) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 80%\nPoraz: 19% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
          else if ((a==13) && (b==1 || b==6 || b==10)) {
        cout<< "Vase moznosti za: \nZmago: 19%\nPoraz: 80% \nIzenacenje: 1%"<<endl; // Proti večjemu paru
        }
          else if ((a==13) && (b==5 || b==9 || b==12)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 29% \nIzenacenje: 1%"<<endl; // Proti eni karti z večjo vrednostjo in eni z manjšo
        }
         else if ((a==13) && (b==4 || b==8 || b==11)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 29% \nIzenacenje: 1%"<<endl; // Proti eni karti z večjo in eni z enako vrednostjo
        }
        else if ((a==13) && (b==2|| b==3 || b==7)) {
        cout<< "Vase moznosti za: \nZmago: 55%\nPoraz: 44% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z večjo vrednostjo
        }


if ((a==15) && (b==15))      // Če imate 1010
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
          else if ((a==15) && (b==1 || b==6 || b==10 || b==13)) {
        cout<< "Vase moznosti za: \nZmago: 19%\nPoraz: 80% \nIzenacenje: 1%"<<endl; // Proti večjemu paru
        }
         else if ((a==15) && (b==5 || b==9 || b==12 || b==14)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 29% \nIzenacenje: 1%"<<endl; // Proti eni karti z večjo in eni z enako vrednostjo
        }
        else if ((a==15) && (b==2|| b==3 || b==4 || b==7|| b==8|| b==11)) {
        cout<< "Vase moznosti za: \nZmago: 55%\nPoraz: 44% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z večjo vrednostjo
        }


if ((a==2) && (b==2))      // Če imate AK
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==2) && (b==3 || b==4 || b==5)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 26% \nIzenacenje: 4%"<<endl; //Proti eni karti z isto večjo in eni z manjšo vrednostjo
        }
         else if ((a==2) && (b==10 || b==13 || b==15)) {
        cout<< "Vase moznosti za: \nZmago: 44%\nPoraz: 55% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
          else if ((a==2) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z isto večjo vrednostjo
        }
          else if ((a==2) && (b==6)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z isto manjšo vrednostjo
        }
        else if ((a==2) && (b==11|| b==12 || b==14)) {
        cout<< "Vase moznosti za: \nZmago: 64%\nPoraz: 35% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z manjšo vrednostjo
        }
        else if ((a==2) && (b==7|| b==8 || b==9)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z isto manjšo in manjšo vrednostjo
        }


if ((a==3) && (b==3))      // Če imate AQ
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==3) && (b==4 || b==5)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 26% \nIzenacenje: 4%"<<endl; //Proti eni karti z enako večjo in eni z manjšo vrednostjo
        }
        else if ((a==3) && (b==13 || b==15)) {
        cout<< "Vase moznosti za: \nZmago: 44%\nPoraz: 55% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
        else if ((a==3) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==3) && (b==10)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
        }
        else if ((a==3) && (b==14)) {
        cout<< "Vase moznosti za: \nZmago: 64%\nPoraz: 35% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z manjšo vrednostjo
        }
        else if ((a==3) && (b==11 || b==12)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in manjšo vrednostjo
        }
        else if ((a==3) && (b==7)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==3) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 26%\nPoraz: 70% \nIzenacenje: 4%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==3) && (b==6)) {
        cout<< "Vase moznosti za: \nZmago: 28%\nPoraz: 71% \nIzenacenje: 1%"<<endl; // Proti paru med vrednostima
        }
        else if ((a==3) && (b==8 || b==9)) {
        cout<< "Vase moznosti za: \nZmago: 64%\nPoraz: 35% \nIzenacenje: 1%"<<endl; // Proti eni karti med vrednostima in eni manjši
        }


if ((a==4) && (b==4))      // Če imate AJ
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==4) && (b==5)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 26% \nIzenacenje: 4%"<<endl; //Proti eni karti z enako večjo in eni z manjšo vrednostjo
        }
        else if ((a==4) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 44%\nPoraz: 55% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
        else if ((a==4) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==4) && (b==13)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==4) && (b==14)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in manjšo vrednostjo
        }
        else if ((a==4) && (b==8 || b==11)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==4) && (b==2 || b==3)) {
        cout<< "Vase moznosti za: \nZmago: 26%\nPoraz: 70% \nIzenacenje: 4%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==4) && (b==6 || b==10)) {
        cout<< "Vase moznosti za: \nZmago: 28%\nPoraz: 71% \nIzenacenje: 1%"<<endl; // Proti paru med vrednostima
        }
        else if ((a==4) && (b==9 || b==12)) {
        cout<< "Vase moznosti za: \nZmago: 64%\nPoraz: 35% \nIzenacenje: 1%"<<endl; // Proti eni karti med vrednostima in eni manjši
        }
        else if ((a==4) && (b==7)) {
        cout<< "Vase moznosti za: \nZmago: 59%\nPoraz: 40% \nIzenacenje: 1%"<<endl; // Proti dvema kartama med vrednostima
        }


if ((a==5) && (b==5))      // Če imate A10
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==5) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==5) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==5) && (b==9 || b==12 || b==14)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==5) && (b==2 || b==3 || b==4)) {
        cout<< "Vase moznosti za: \nZmago: 26%\nPoraz: 70% \nIzenacenje: 4%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==5) && (b==6 || b==10 || b==13)) {
        cout<< "Vase moznosti za: \nZmago: 28%\nPoraz: 71% \nIzenacenje: 1%"<<endl; // Proti paru med vrednostima
        }
        else if ((a==5) && (b==7 || b==8 || b==11)) {
        cout<< "Vase moznosti za: \nZmago: 59%\nPoraz: 40% \nIzenacenje: 1%"<<endl; // Proti dvema kartama med vrednostima
        }




if ((a==7) && (b==7))      // Če imate KQ
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==7) && (b==8 || b==9)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 26% \nIzenacenje: 4%"<<endl; //Proti eni karti z enako večjo in eni z manjšo vrednostjo
        }
        else if ((a==7) && (b==13 || b==15)) {
        cout<< "Vase moznosti za: \nZmago: 44%\nPoraz: 55% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
        else if ((a==7) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 14%\nPoraz: 85% \nIzenacenje: 1%"<<endl; // Proti večjemu paru 
        }
        else if ((a==7) && (b==6)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==7) && (b==10)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==7) && (b==11 || b==12)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in manjšo vrednostjo
        }
        else if ((a==7) && (b==3)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==7) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==7) && (b==4 || b==5)) {
        cout<< "Vase moznosti za: \nZmago: 40%\nPoraz: 59% \nIzenacenje: 1%"<<endl; // Proti eni karti z eno večjo in eno manjšo vrednostjo
        }
         else if ((a==7) && (b==14)) {
        cout<< "Vase moznosti za: \nZmago: 64%\nPoraz: 35% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z manjšo vrednostjo
        }



if ((a==8) && (b==8))      // Če imate KJ
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==8) && (b==9)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 26% \nIzenacenje: 4%"<<endl; //Proti eni karti z enako večjo in eni z manjšo vrednostjo
        }
        else if ((a==8) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 44%\nPoraz: 55% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
        else if ((a==8) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 14%\nPoraz: 85% \nIzenacenje: 1%"<<endl; // Proti večjemu paru 
        }
        else if ((a==8) && (b==10)) {
        cout<< "Vase moznosti za: \nZmago: 28%\nPoraz: 71% \nIzenacenje: 1%"<<endl; // Proti paru med vrednostima
        }
        else if ((a==8) && (b==6)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==8) && (b==13)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==8) && (b==11 || b==14)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in manjšo vrednostjo
        }
        else if ((a==8) && (b==4)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==8) && (b==7)) {
        cout<< "Vase moznosti za: \nZmago: 26%\nPoraz: 70% \nIzenacenje: 4%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==8) && (b==12)) {
        cout<< "Vase moznosti za: \nZmago: 64%\nPoraz: 35% \nIzenacenje: 1%"<<endl; // Proti eni karti med vrednostima in eni manjši
        }
        else if ((a==8) && (b==3)) {
        cout<< "Vase moznosti za: \nZmago: 35%\nPoraz: 64% \nIzenacenje: 1%"<<endl; // Proti eni karti med vrednostima in eni večji
        }
        else if ((a==8) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==8) && (b==5)) {
        cout<< "Vase moznosti za: \nZmago: 40%\nPoraz: 59% \nIzenacenje: 1%"<<endl; // Proti eni karti z eno večjo in eno manjšo vrednostjo
        }



 if ((a==9) && (b==9))      // Če imate K10
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==9) && (b==1)) {
        cout<< "Vase moznosti za: \nZmago: 14%\nPoraz: 85% \nIzenacenje: 1%"<<endl; // Proti večjemu paru 
        }
        else if ((a==9) && (b==10 || b==13)) {
        cout<< "Vase moznosti za: \nZmago: 28%\nPoraz: 71% \nIzenacenje: 1%"<<endl; // Proti paru med vrednostima
        }
        else if ((a==9) && (b==6)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==9) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==9) && (b==12 || b==14)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in manjšo vrednostjo
        }
        else if ((a==9) && (b==5)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==9) && (b==7 || b==8)) {
        cout<< "Vase moznosti za: \nZmago: 26%\nPoraz: 70% \nIzenacenje: 4%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==9) && (b==3 || b==4)) {
        cout<< "Vase moznosti za: \nZmago: 35%\nPoraz: 64% \nIzenacenje: 1%"<<endl; // Proti eni karti med vrednostima in eni večji
        }
        else if ((a==9) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==9) && (b==11)) {
        cout<< "Vase moznosti za: \nZmago: 40%\nPoraz: 59% \nIzenacenje: 1%"<<endl; // Proti dvema kartama med vrednostima
        }



if ((a==11) && (b==11))      // Če imate QJ
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==11) && (b==12)) {
        cout<< "Vase moznosti za: \nZmago: 70%\nPoraz: 26% \nIzenacenje: 4%"<<endl; //Proti eni karti z enako večjo in eni z manjšo vrednostjo
        }
        else if ((a==11) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 44%\nPoraz: 55% \nIzenacenje: 1%"<<endl; // Proti manjšemu paru 
        }
        else if ((a==11) && (b==1 || b==6)) {
        cout<< "Vase moznosti za: \nZmago: 14%\nPoraz: 85% \nIzenacenje: 1%"<<endl; // Proti večjemu paru 
        }
        else if ((a==11) && (b==10)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==11) && (b==13)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==11) && (b==14)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in manjšo vrednostjo
        }
        else if ((a==11) && (b==4 || b==8)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==11) && (b==3 || b==7)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }
        else if ((a==11) && (b==5 || b==9)) {
        cout<< "Vase moznosti za: \nZmago: 40%\nPoraz: 59% \nIzenacenje: 1%"<<endl; // Proti eni karti z eno večjo in eno manjšo vrednostjo
        }
        else if ((a==11) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 35%\nPoraz: 64% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z višjo vrednostjo
        }


if ((a==12) && (b==12))      // Če imate Q10
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==12) && (b==1 || b==6)) {
        cout<< "Vase moznosti za: \nZmago: 14%\nPoraz: 85% \nIzenacenje: 1%"<<endl; // Proti večjemu paru 
        }
        else if ((a==12) && (b==13)) {
        cout<< "Vase moznosti za: \nZmago: 28%\nPoraz: 71% \nIzenacenje: 1%"<<endl; // Proti paru med vrednostima
        }
        else if ((a==12) && (b==10)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==12) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==12) && (b==5 || b==9)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==12) && (b==14)) {
        cout<< "Vase moznosti za: \nZmago: 74%\nPoraz: 25% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in manjšo vrednostjo
        }
        else if ((a==12) && (b==3 || b==7)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
	    }
        else if ((a==12) && (b==2)) {
        cout<< "Vase moznosti za: \nZmago: 35%\nPoraz: 64% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z višjo vrednostjo
        }
        else if ((a==12) && (b==4 || b==8)) {
        cout<< "Vase moznosti za: \nZmago: 35%\nPoraz: 64% \nIzenacenje: 1%"<<endl; // Proti eni karti med vrednostima in eni večji
        }
        else if ((a==12) && (b==11)) {
        cout<< "Vase moznosti za: \nZmago: 26%\nPoraz: 70% \nIzenacenje: 4%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
        }


 if ((a==14) && (b==14))      // Če imate J10
        {                 
        cout<< "Vase moznosti za: \nZmago: 2%\nPoraz: 2% \nIzenacenje: 96%"<< endl; //Proti istim kartam
        }
        else if ((a==14) && (b==1 || b==6 || b==10)) {
        cout<< "Vase moznosti za: \nZmago: 14%\nPoraz: 85% \nIzenacenje: 1%"<<endl; // Proti večjemu paru 
        }
        else if ((a==14) && (b==13)) {
        cout<< "Vase moznosti za: \nZmago: 8%\nPoraz: 90% \nIzenacenje: 2%"<<endl; // Proti paru z enako večjo vrednostjo
        }
        else if ((a==14) && (b==15)) {
        cout<< "Vase moznosti za: \nZmago: 29%\nPoraz: 70% \nIzenacenje: 1%"<<endl; // Proti paru z enako manjšo vrednostjo
	    }
        else if ((a==14) && (b==5 || b==9 || b==12)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako manjšo in večjo vrednostjo
        }
        else if ((a==14) && (b==4 || b==8 || b==11)) {
        cout<< "Vase moznosti za: \nZmago: 25%\nPoraz: 74% \nIzenacenje: 1%"<<endl; // Proti eni karti z enako večjo in večjo vrednostjo
	    }
        else if ((a==14) && (b==2 || b==3 || b==7)) {
        cout<< "Vase moznosti za: \nZmago: 35%\nPoraz: 64% \nIzenacenje: 1%"<<endl; // Proti dvema kartama z višjo vrednostjo
        }

         cout<< endl;
 
	    cout << "Ali zelite poiskusiti z drugo kombinacijo? [y/n]: ";
        char odgovor;
        cin >> odgovor;
        if (odgovor == 'n')
            break; 
       
       } 
        cout<<endl;
        cout << "Najlepsa hvala in nasvidenje! " << endl;
           
	return 0; 
	}

void vizitka_pograma(){
	cout << "\t\t\t\t-----------------------------------------------\t\t\t\t" << endl;
	cout << "\t\t\t\t|               Dobrodosli                    |\t\t\t\t" << endl;
	cout << "\t\t\t\t-----------------------------------------------\t\t\t\t" << endl;
	cout << "\t\t\t\t|   Program za ugotavljanje zmage pri pokru   |\t\t\t\t" << endl;
	cout << "\t\t\t\t|   Avtor: Gregor Draznik                     |\t\t\t\t" << endl;
	cout << "\t\t\t\t|   ID: 11150198108                           |\t\t\t\t" << endl;
	cout << "\t\t\t\t-----------------------------------------------\t\t\t\t" << endl;
	cout << "\n";
}

