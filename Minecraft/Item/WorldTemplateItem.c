

void __fastcall WorldTemplateItem::~WorldTemplateItem(WorldTemplateItem *this)
{
  WorldTemplateItem::~WorldTemplateItem(this);
}


WorldTemplateItem *__fastcall WorldTemplateItem::~WorldTemplateItem(WorldTemplateItem *this)
{
  WorldTemplateItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E80AC;
  v2 = *((_DWORD *)this + 20);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 19);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ManifestContentItem::~ManifestContentItem(v1);
  return v1;
}


int __fastcall WorldTemplateItem::WorldTemplateItem(int result, int a2)
{
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 40) = 48;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 56) = a2;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = &unk_28898CC;
  *(_DWORD *)(result + 68) = &unk_28898CC;
  *(_DWORD *)(result + 72) = &unk_28898CC;
  *(_DWORD *)result = &off_26E80AC;
  *(_DWORD *)(result + 76) = &unk_28898CC;
  *(_DWORD *)(result + 80) = &unk_28898CC;
  return result;
}


void __fastcall WorldTemplateItem::~WorldTemplateItem(WorldTemplateItem *this)
{
  WorldTemplateItem *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26E80AC;
  v2 = *((_DWORD *)this + 20);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 19);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  ManifestContentItem::~ManifestContentItem(v1);
  operator delete((void *)v1);
}
