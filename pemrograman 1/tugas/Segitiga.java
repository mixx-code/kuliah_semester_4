public class Segitiga{ 
 private double tinggi; 
 private double alas; 
 
 
 public Segitiga(){ 
 tinggi=0; 
 alas=0; 
 } 
 
 /*public Segitiga(double initTinggi, double initAlas){ 
 tinggi=initTinggi; 
 alas=initAlas; 
 }*/ 
 
 public Segitiga(double tinggi, double alas){ 
 this.tinggi=tinggi; 
 this.alas=alas; 
 } 
 
 public void settinggi(double tinggi){ 
 this.tinggi = tinggi; 
 } 
 
 public void setalas(double alas){ 
 this.alas = alas; 
 } 
 
 public double gettinggi(){ 
 return tinggi; 
 } 
 
 public double getalas(){ 
 return alas; 
 }
 
 public double getluas(){
    return (this.tinggi * this.alas * 0.5); 
 }

public static void main (String args[]){ 
Segitiga S[] = new Segitiga[4]; 
Byte i; 
S[0] = new Segitiga(6,8); 
S[1] = new Segitiga(5,3); 
S[2] = new Segitiga(); 
S[3] = new Segitiga(); 

S[2].settinggi(12.0); 
S[2].setalas(8.0); 

S[3].settinggi(11.23); 
S[3].setalas(7.7); 

for (i=0;i<4;i++){ 
System.out.println("Segitiga ke-" + (i+1)); 
System.out.println("Tinggi = " + S[i].gettinggi()); 
System.out.println("Alas = " + S[i].getalas()); 
System.out.println("Luas Segitiga = " + S[i].getluas()); 
System.out.println(); 
} 
} 
}
