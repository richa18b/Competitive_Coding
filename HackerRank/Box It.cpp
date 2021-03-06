{\rtf1\ansi\ansicpg1252\deff0\deflang1033{\fonttbl{\f0\fnil\fcharset0 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 class Box\par
\{\par
    private:\par
        int l,b,h;\par
    public:\par
        Box()\par
        \{ l=0; b=0; h=0; BoxesCreated++; \} \par
    \par
        Box(int length,int breadth,int height)\par
        \{ l=length; b=breadth; h=height; BoxesCreated++; \}\par
    \par
        Box(const Box &B)\par
        \{ l=B.l; b=B.b; h=B.h; BoxesCreated++; \}\par
    \par
        ~Box()\par
        \{ BoxesDestroyed++; \}\par
    \par
        int getLength()\par
        \{ return l; \}\par
    \par
        int getBreadth()\par
        \{ return b; \}\par
    \par
        int getHeight()\par
        \{ return h; \}\par
    \par
        long long CalculateVolume()\par
        \{ return (long long)l*b*h; \}\par
    \par
        bool operator<(const Box& B)\par
        \{\par
            if(l<B.l)\par
                return true;\par
            else if(b<B.b && l==B.l)\par
                return true;\par
            else if(h<B.h && b==B.b && l==B.l)\par
                return true;\par
                \par
            return false;\par
        \}\par
    \par
        friend ostream& operator<<(ostream& out,Box B)\par
        \{\par
            out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();\par
            return out;\par
        \}\par
\};\par
}
 