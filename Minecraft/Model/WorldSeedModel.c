

char *__fastcall WorldSeedModel::getImagePath(WorldSeedModel *this)
{
  return (char *)this + 12;
}


char *__fastcall WorldSeedModel::getSeed(WorldSeedModel *this)
{
  return (char *)this + 8;
}


int *__fastcall WorldSeedModel::WorldSeedModel(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v3 + 1, v2 + 1);
  sub_DA73B4(v3 + 2, v2 + 2);
  sub_DA73B4(v3 + 3, v2 + 3);
  return v3;
}


WorldSeedModel *__fastcall WorldSeedModel::~WorldSeedModel(WorldSeedModel *this)
{
  WorldSeedModel *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v6 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = (int *)(*(_DWORD *)v1 - 12);
  if ( v8 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  return v1;
}


int __fastcall WorldSeedModel::WorldSeedModel(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  return result;
}


char *__fastcall WorldSeedModel::getTitle(WorldSeedModel *this)
{
  return (char *)this + 4;
}


int *__fastcall WorldSeedModel::WorldSeedModel(int *a1, int *a2, int *a3, int *a4)
{
  int *v4; // r4@1
  int *v5; // r7@1
  int *v6; // r5@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_DA73B4(a1, a2);
  sub_DA73B4(v6 + 1, v5);
  sub_DA73B4(v6 + 2, v4);
  v6[3] = (int)&unk_28898CC;
  return v6;
}
