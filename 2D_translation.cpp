#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    cout<<"1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Shearing   "<<endl;
    cout<<"Query :";
    cin>>s;
    
    if (s == 1)
    {
        int x1,x2,y1,y2,tx,ty;
        cout << "Enter The co-ordinates of Rectangle :- \nx1 : ";
        cin >> x1;
        cout << "x2 : ";
        cin >> x2;
        cout << "y1 : ";
        cin >> y1;
        cout << "y2 : ";
        cin >> y2;
        setcolor(5);
        cout << "Rectangle before translation :- "
        rectangle(x1,x2,y1,y2);
        setcolor(10);
        cout << "Enter translation Co-ordiantes :- \ntx : ";
        cin >> tx;
        cout << "ty : ";
        cin >> ty;
        rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
        getch();
    }
    else if (s == 2)
    {
        int x1,x2,y1,y2,dx,dy;
        double a;
        dx = x2 - x1;
        dy = y2 - y1;

        cout << "Enter The co-ordinates of Rectangle :- \nx1 : ";
        cin >> x1;
        cout << "x2 : ";
        cin >> x2;
        cout << "y1 : ";
        cin >> y1;
        cout << "y2 : ";
        cin >> y2;
        
        setcolor(5);
        cout << "Rectangle before Rotation :- "<<endl;
        rectangle(x1,x2,y1,y2);
        setcolor(10);

        cout << "Angle of rotation (in radians) : ";
        cin >> a;
        a = (a*3.14)/180;
        long xr = x1 +(dx*cos(a)-dy*sin(a));
        long yr = y1 + (dy*sin(a)+dx*cos(a));
        setcolor(3);
        rectangle(x1,y1,xr,yr);
        getch();
    }
    else if (s == 3)
    {
        int x1=30,y1=30,x2=70,y2=70,y=2,x=2;
                cout<<"Before scaling"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"After scaling"<<endl;
                setcolor(10);
                rectangle(x1*x,y1*y,x2*x,y2*y);
                getch();
                break;

    }




closegraph();
    return 0;
}
