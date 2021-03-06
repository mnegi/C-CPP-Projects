#include "C:\NEGI\fixfld.cpp"
#include "C:\NEGI\textind.cpp"

class TextIndexBuffer:public FixedFieldBuffer
{
   public:
     TextIndexBuffer (int keySize, int maxKeys = 100, int extraFields = 0,
			int extraSize = 0);
     int Pack (const TextIndex &);
     int Unpack (TextIndex &);
     void Print (ostream &) const;
   protected:
     int MaxKeys;
     int KeySize;
     char *Dummy;
};

