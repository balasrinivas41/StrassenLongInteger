using namespace std;
#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
//this is c++ file
int checkinput(string,string);
string multiplystring(string,string);
string addstring(string,string);
void adjustbefore(string *,string *);
string substractstring(string,string);
int main()
{
	string a,b,c;
	int flg,alen,blen,posa,posb;
	cout<<"enter bit string1"<<endl;
	cin>>a;
	cout<<"enter bit string 2"<<endl;
	cin>>b;
	flg=checkinput(a,b);
	if(flg==0)
	cout<<"a is not binary";
	else if(flg==1)
	cout<<"b is not binary";
	else
	cout<<"every thing is fine";
	
	
	
	
	
/*	posa=a.find("1");
posb=b.find("1");

cout<<"posa is "<<posa;
cout<<"posb is "<<posb;
if(posa>0)
{

a=a.erase(0,posa);
//b=b.erase(0,posb-1);
}
if(posa==0)
a=a.erase(0,1);

if(posb>0)
{

//a=a.erase(0,posa-1);
b=b.erase(0,posb);
}

if(posb==0)
b=b.erase(0,1);

if(posa==-1)
{
a=a.erase(0,alen);
a="0";
}
if(posb==-1)
{
b=b.erase(0,blen);
b="0";
}
cout<<"a after erase is "<<a;
cout<<"b after erase is "<<b;

adjustbefore(&a,&b);
alen=a.length();
blen=b.length();*/
	
	
	
	
	
	
    c=multiplystring(a,b);
    cout<<"c is returned as"<<c;
	
}




//void addzero(string *a,string *b)


//checking input
 int checkinput(string a,string b)
{
	int lena,lenb,i,num,flg;
	lena=a.length();
	lenb=b.length();
	//if(a==b)
	flg=100;
	for(i=0;i<lena;i++)
	{
		num=(int)a[i]-'0';
		cout<<"num a is"<<num<<endl;
		if(num==1||num==0)
		cout<<"binary";
		else
		{
		flg=0;
		break;	
		}
		
	}
	if(flg==0)
	return flg;
	
	
		for(i=0;i<lenb;i++)
	{
		num=(int)b[i]-'0';
		cout<<"num b is"<<num<<endl;
		if(num==1||num==0)
		cout<<"binary";
		else
		{
		flg=1;
		break;	
		}
		
	}

	return flg;
	
}

string multiplystring(string a,string b)
{
	string c,u,v,w,x,q,r,o,p,s,g,h,k,l;
	int lena,lenb,a1,a2,i;
	lena=a.length();
	lenb=b.length();
//	adjustbefore(&a,&b);
//	cout<<"after adjust";
cout<<"lena is "<<lena;
cout<<"lenb is "<<lenb;
	if(lena==1&&lenb==1)
	{
		
		//strcmp(a,"0")
		
		if( a=="0"&&b=="0")
		return "0";
			if( a=="1"&&b=="0")
		return "0";
			if( a=="0"&&b=="1")
		return "0";
		if(a=="1"&&b=="1")
		return "1";
		
	//	adjustbefore(&a,&b);
		
		
		
		
	}
	adjustbefore(&a,&b);
	cout<<"after adjust";
	lena=a.length();
	lenb=b.length();
		
	if(lena%2==1&&lenb%2==1)
	{
		a='0'+a;
		b='0'+b;
		
	}
    lena=a.length();
	lenb=b.length();	
	
	a1=lena/2;
	a2=lenb/2;
	
	cout<<"a1 is "<<a1;
	cout<<"a2 is "<<a2;
	
	u=a.substr(0,a1);
	v=a.substr(a1,a1);
	w=b.substr(0,a2);
	x=b.substr(a2,a2);


   // q=multiplystring(u,v);
    //r=multiplystring(v,x);
    
    //o=addstring()
    //s=multiplystring(o,p)
	
	
	cout<<"u is "<<u;
	cout<<"v is "<<v;
	cout<<"w is"<<w;
	cout<<"x is "<<x;
	
	
	
	
	 q=multiplystring(u,w);
    r=multiplystring(v,x);
    
    o=addstring(u,v);
    p=addstring(w,x);
    s=multiplystring(o,p);
    adjustbefore(&q,&r);
    g=addstring(q,r);
    adjustbefore(&s,&g);
    h=substractstring(s,g);
    
	//substractstring();
	
	
	cout<<"after substraction h is"<<h;
	for(i=0;i<lena;i++)
	{
	
	q=q+'0';
	
   }
	
		for(i=0;i<a1;i++)
		{
		
	    h=h+'0';
	    
    	}
    	
    	
    	adjustbefore(&q,&h);
    	k=addstring(q,h);
    	adjustbefore(&k,&r);
    	l=addstring(k,r);
	
	
	
	
	cout<<"a is "<<a;
	cout<<"b is "<<b;
    //c=addstring(a,b);
	//cout<<"after add is "<<c;
	
	
	return l;
}

void adjustbefore(string *a,string *b)
{
	int lena,lenb,i;
	lena=(*a).length();
	lenb=(*b).length();
	if(lena<lenb)
	{
		for(i=0;i<lenb-lena;i++)
		{
			*a="0"+*a;
			
		}
		//return a;
		}	
	else if(lenb<lena)
	{
		
		
		for(i=0;i<lena-lenb;i++)
		{
			*b="0"+*b;
			
		}
	//	return b;
		
		
		
	}
	
}

string addstring(string a,string b)
{
	
	int ai,bi,ci,alen,blen,i,sum2;
	char ch;
	string sum1;
	alen=a.length();
	blen=b.length();
	ci=0;
	for(i=0;i<alen;i++)
	{
		cout<<"sum1 is"<<sum1;
	//sum2=0;
	sum2=((int)a[alen-i-1]-'0')^((int)b[alen-i-1]-'0')^ci;
	if(sum2==0)
	ch='0';
	else if(sum2==1)
	ch='1';
	
	
	//ch=(char)sum2-'0';
	cout<<"ch is"<<ch;
	sum1=ch+sum1;
//	ch=(char)sum1;
		ci=(((int)a[alen-i-1]-'0')&((int)b[alen-i-1]-'0'))|((int)b[alen-i-1]-'0')&ci|((int)a[alen-i-1]-'0')&ci;
	cout<<"sum is"<<sum1;
	cout<<"carry is"<<ci;
	
	
		
	}
	
	if(ci==1)
	sum1='1'+sum1;
	cout<<"sum1 is"<<sum1;
	
	return sum1;
}








string substractstring(string a,string b)
{
string c;
int sum2,abar,bbar,carry,alen,blen,i,posa,posb;
char ch;

alen=a.length();
blen=b.length();
carry=0;

posa=a.find("1");
posb=b.find("1");

cout<<"posa is "<<posa;
cout<<"posb is "<<posb;
if(posa>0)
{

a=a.erase(0,posa);
//b=b.erase(0,posb-1);
}
//if(posa==0)
//a=a.erase(0,1);

if(posb>0)
{

//a=a.erase(0,posa-1);
b=b.erase(0,posb);
}

//if(posb==0)
//b=b.erase(0,1);

if(posa==-1)
{
a=a.erase(0,alen);
a="0";
}
if(posb==-1)
{
b=b.erase(0,blen);
b="0";
}
cout<<"a after erase is "<<a;
cout<<"b after erase is "<<b;

adjustbefore(&a,&b);
alen=a.length();
blen=b.length();




for(i=0;i<alen;i++)
{
sum2=((int)a[alen-i-1]-'0')^((int)b[alen-i-1]-'0')^carry;

if(sum2==0)
ch='0';
if(sum2==1)
ch='1';

c=ch+c;

if(a[alen-i-1]=='0')
abar=1;
if(a[alen-i-1]=='1')
abar=0;
if(b[alen-i-1]=='0')
bbar=1;
if(b[alen-i-1]=='1')
bbar=0;

carry=((int)b[alen-i-1]-'0')&carry|abar&carry|abar&((int)b[alen-i-1]-'0');

cout<<"diff is"<<c;
cout<<"carry is"<<carry;


}
if(carry==1)
cout<<"negative number";
else if(carry==0)
cout<<"positive number";

cout<<"diff is"<<c;


return c;
}
