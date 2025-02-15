/* This file was generated by the Hex-Rays decompiler version 7.7.0.220118.
   Copyright (c) 2007-2021 Hex-Rays <info@hex-rays.com>

   Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>

#include <stdarg.h>


//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

int sub_10486(wchar_t *Dest, unsigned int a2, wchar_t *Format, ...);
void __stdcall sub_104C0(int a1);
PDEVICE_OBJECT __stdcall sub_104E0(int a1, int Args, int a3);
int __stdcall sub_1058E(int, PIRP Irp, PRKEVENT Event); // idb
int __stdcall sub_1060C(PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, union _LARGE_INTEGER StartingOffset, char); // idb
int __stdcall sub_106CE(PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, union _LARGE_INTEGER StartingOffset, char); // idb
int __stdcall sub_10790(int, PIRP Irp); // idb
int __stdcall sub_107B4(int a1);
NTSTATUS __stdcall sub_107DA(int a1, PIRP Irp);
NTSTATUS __stdcall sub_10864(int a1, PIRP Irp);
NTSTATUS __stdcall sub_108EE(int a1, PIRP Irp);
int __stdcall sub_10A0E(int, PIRP Irp); // idb
NTSTATUS __stdcall sub_10A5E(int a1, IRP *DeviceObject);
PDRIVER_OBJECT __stdcall sub_10B34(PDRIVER_OBJECT DriverObject, int a2);
void __thiscall sub_10BE3(void *this);
// ULONG DbgPrint(PCSTR Format, ...);
// void *__cdecl memset(void *, int Val, size_t Size);
// void *__cdecl memcpy(void *, const void *Src, size_t MaxCount);
int __stdcall sub_10C46(_WORD *a1, int a2, _DWORD *a3);
int __stdcall sub_10C8C(_WORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4);
int __stdcall sub_10CC8(wchar_t *Dest, int a2, int *a3, wchar_t *Format, va_list Args);
// int __cdecl _vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args);
ULONG sub_10E16();
NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath);

//-------------------------------------------------------------------------
// Data declarations

const wchar_t asc_119C6[] = L"\\"; // idb
const WCHAR word_11A02 = 92u; // idb
// extern void (__stdcall *IoDeleteDevice)(PDEVICE_OBJECT DeviceObject);
// extern NTSTATUS (__stdcall *IoDeleteSymbolicLink)(PUNICODE_STRING SymbolicLinkName);
// extern LONG_PTR (__fastcall *ObfReferenceObject)(PVOID Object);
// extern NTSTATUS (__stdcall *IoGetDeviceObjectPointer)(PUNICODE_STRING ObjectName, ACCESS_MASK DesiredAccess, PFILE_OBJECT *FileObject, PDEVICE_OBJECT *DeviceObject);
// extern void (__stdcall *RtlInitUnicodeString)(PUNICODE_STRING DestinationString, PCWSTR SourceString);
// extern void (__stdcall *IoFreeIrp)(PIRP Irp);
// extern LONG (__stdcall *KeSetEvent)(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait);
// extern void (__stdcall *IoFreeMdl)(PMDL Mdl);
// extern void (__stdcall *MmUnlockPages)(PMDL MemoryDescriptorList);
// extern void (__stdcall *ExFreePoolWithTag)(PVOID P, ULONG Tag);
// extern NTSTATUS (__stdcall *KeWaitForSingleObject)(PVOID Object, KWAIT_REASON WaitReason, KPROCESSOR_MODE WaitMode, BOOLEAN Alertable, PLARGE_INTEGER Timeout);
// extern NTSTATUS (__fastcall *IofCallDriver)(PDEVICE_OBJECT DeviceObject, PIRP Irp);
// extern void (__stdcall *KeInitializeEvent)(PRKEVENT Event, EVENT_TYPE Type, BOOLEAN State);
// extern PIRP (__stdcall *IoBuildAsynchronousFsdRequest)(ULONG MajorFunction, PDEVICE_OBJECT DeviceObject, PVOID Buffer, ULONG Length, PLARGE_INTEGER StartingOffset, PIO_STATUS_BLOCK IoStatusBlock);
// extern void (__fastcall *IofCompleteRequest)(PIRP Irp, CCHAR PriorityBoost);
// extern PVOID (__stdcall *MmMapLockedPagesSpecifyCache)(PMDL MemoryDescriptorList, KPROCESSOR_MODE AccessMode, MEMORY_CACHING_TYPE CacheType, PVOID RequestedAddress, ULONG BugCheckOnFailure, ULONG Priority);
// extern LONG_PTR (__fastcall *ObfDereferenceObject)(PVOID Object);
// extern PDEVICE_OBJECT (__stdcall *IoGetAttachedDeviceReference)(PDEVICE_OBJECT DeviceObject);
// extern NTSTATUS (__stdcall *RtlUnicodeStringToInteger)(PCUNICODE_STRING String, ULONG Base, PULONG Value);
// extern PVOID (__stdcall *ExAllocatePoolWithTag)(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag);
// extern PIRP (__stdcall *IoBuildDeviceIoControlRequest)(ULONG IoControlCode, PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, ULONG InputBufferLength, PVOID OutputBuffer, ULONG OutputBufferLength, BOOLEAN InternalDeviceIoControl, PKEVENT Event, PIO_STATUS_BLOCK IoStatusBlock);
// extern NTSTATUS (__stdcall *IoCreateSymbolicLink)(PUNICODE_STRING SymbolicLinkName, PUNICODE_STRING DeviceName);
// extern NTSTATUS (__stdcall *IoCreateDevice)(PDRIVER_OBJECT DriverObject, ULONG DeviceExtensionSize, PUNICODE_STRING DeviceName, ULONG DeviceType, ULONG DeviceCharacteristics, BOOLEAN Exclusive, PDEVICE_OBJECT *DeviceObject);
// extern volatile __declspec(align(64)) KSYSTEM_TIME KeTickCount;
// extern void (__stdcall __noreturn *KeBugCheckEx)(ULONG BugCheckCode, ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4);
ULONG_PTR BugCheckParameter2 = 3141592654u; // idb
ULONG_PTR BugCheckParameter3 = 1153374641u; // idb
struct _UNICODE_STRING DeviceName = { 0u, 0u, NULL }; // idb
struct _UNICODE_STRING SymbolicLinkName = { 0u, 0u, NULL }; // idb
PDEVICE_OBJECT DeviceObject = NULL; // idb


//----- (00010486) --------------------------------------------------------
int sub_10486(wchar_t *Dest, unsigned int a2, wchar_t *Format, ...)
{
  int result; // eax
  va_list va; // [esp+18h] [ebp+14h] BYREF

  va_start(va, Format);
  result = sub_10C8C(Dest, a2 >> 1, 0, 0x7FFFFFFFu);
  if ( result >= 0 )
    return sub_10CC8(Dest, a2 >> 1, 0, Format, va);
  return result;
}

//----- (000104C0) --------------------------------------------------------
void __stdcall sub_104C0(int a1)
{
  IoDeleteSymbolicLink(&SymbolicLinkName);
  IoDeleteDevice(DeviceObject);
}

//----- (000104E0) --------------------------------------------------------
PDEVICE_OBJECT __stdcall sub_104E0(int a1, int Args, int a3)
{
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-8Ch] BYREF
  PFILE_OBJECT FileObject; // [esp+10h] [ebp-84h] BYREF
  PDEVICE_OBJECT DeviceObject; // [esp+14h] [ebp-80h] BYREF
  WCHAR SourceString[60]; // [esp+18h] [ebp-7Ch] BYREF

  DeviceObject = 0;
  FileObject = 0;
  memset(SourceString, 0, sizeof(SourceString));
  if ( sub_10486(SourceString, 0x78u, (wchar_t *)asc_119C6, Args, a3) )
    return 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject) )
    return 0;
  ObfReferenceObject(DeviceObject);
  *(_DWORD *)(a1 + 12) = FileObject;
  return DeviceObject;
}
// 104E0: using guessed type _DWORD Args;

//----- (0001058E) --------------------------------------------------------
int __stdcall sub_1058E(int a1, PIRP Irp, PRKEVENT Event)
{
  struct _IRP *MasterIrp; // eax
  PMDL MdlAddress; // edi

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MasterIrp && (Irp->Flags & 0x20) != 0 )
    ExFreePoolWithTag(MasterIrp, 0);
  while ( Irp->MdlAddress )
  {
    MdlAddress = Irp->MdlAddress;
    Irp->MdlAddress = MdlAddress->Next;
    MmUnlockPages(MdlAddress);
    IoFreeMdl(MdlAddress);
  }
  if ( Irp->PendingReturned && Event )
  {
    *Irp->UserIosb = *(struct _IO_STATUS_BLOCK *)&Irp->IoStatus.Status;
    KeSetEvent(Event, 1, 0);
  }
  IoFreeIrp(Irp);
  return -1073741802;
}

//----- (0001060C) --------------------------------------------------------
int __stdcall sub_1060C(
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        union _LARGE_INTEGER StartingOffset,
        char a5)
{
  int result; // eax
  PIRP v6; // eax
  IRP *v7; // esi
  int v8; // eax
  int v9; // eax
  struct _KEVENT Event; // [esp+4h] [ebp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+14h] [ebp-8h] BYREF

  if ( StartingOffset.HighPart < 0 )
    return -1073741811;
  v6 = IoBuildAsynchronousFsdRequest(3u, DeviceObject, Buffer, Length, &StartingOffset, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return -1073741670;
  if ( a5 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = v7->Tail.Overlay.PacketType - 36;
    *(_DWORD *)(v8 + 32) = &Event;
    *(_DWORD *)(v8 + 28) = sub_1058E;
    *(_BYTE *)(v8 + 3) = -32;
    result = IofCallDriver(DeviceObject, v7);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    v9 = v6->Tail.Overlay.PacketType - 36;
    *(_DWORD *)(v9 + 28) = sub_1058E;
    *(_DWORD *)(v9 + 32) = 0;
    *(_BYTE *)(v9 + 3) = -32;
    v7->UserIosb = 0;
    return IofCallDriver(DeviceObject, v7);
  }
  return result;
}

//----- (000106CE) --------------------------------------------------------
int __stdcall sub_106CE(
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        union _LARGE_INTEGER StartingOffset,
        char a5)
{
  int result; // eax
  PIRP v6; // eax
  IRP *v7; // esi
  int v8; // eax
  int v9; // eax
  struct _KEVENT Event; // [esp+4h] [ebp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+14h] [ebp-8h] BYREF

  if ( StartingOffset.HighPart < 0 )
    return -1073741811;
  v6 = IoBuildAsynchronousFsdRequest(4u, DeviceObject, Buffer, Length, &StartingOffset, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return -1073741670;
  if ( a5 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = v7->Tail.Overlay.PacketType - 36;
    *(_DWORD *)(v8 + 32) = &Event;
    *(_DWORD *)(v8 + 28) = sub_1058E;
    *(_BYTE *)(v8 + 3) = -32;
    result = IofCallDriver(DeviceObject, v7);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    v9 = v6->Tail.Overlay.PacketType - 36;
    *(_DWORD *)(v9 + 28) = sub_1058E;
    *(_DWORD *)(v9 + 32) = 0;
    *(_BYTE *)(v9 + 3) = -32;
    v7->UserIosb = 0;
    return IofCallDriver(DeviceObject, v7);
  }
  return result;
}

//----- (00010790) --------------------------------------------------------
int __stdcall sub_10790(int a1, PIRP Irp)
{
  Irp->IoStatus.Status = 0;
  Irp->IoStatus.Information = 0;
  IofCompleteRequest(Irp, 0);
  return 0;
}

//----- (000107B4) --------------------------------------------------------
int __stdcall sub_107B4(int a1)
{
  int v1; // eax
  int v3; // eax

  v1 = *(_DWORD *)(a1 + 96);
  if ( v1 && (v3 = *(_DWORD *)(v1 + 24)) != 0 )
    return *(_DWORD *)(v3 + 16);
  else
    return 0;
}

//----- (000107DA) --------------------------------------------------------
NTSTATUS __stdcall sub_107DA(int a1, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // esi
  NTSTATUS v4; // ebx
  PMDL MdlAddress; // eax
  PVOID MappedSystemVa; // eax
  struct _DEVICE_OBJECT *Irpa; // [esp+18h] [ebp+Ch]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irpa = (struct _DEVICE_OBJECT *)sub_107B4((int)Irp);
  if ( Irpa )
  {
    MdlAddress = Irp->MdlAddress;
    if ( (MdlAddress->MdlFlags & 5) != 0 )
      MappedSystemVa = MdlAddress->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0, 0, 0x10u);
    if ( MappedSystemVa )
    {
      v4 = sub_106CE(
             Irpa,
             MappedSystemVa,
             CurrentStackLocation->Parameters.Read.Length,
             CurrentStackLocation->Parameters.Read.ByteOffset,
             1);
      if ( !v4 )
        Irp->IoStatus.Information = CurrentStackLocation->Parameters.Read.Length << 9;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return v4;
}

//----- (00010864) --------------------------------------------------------
NTSTATUS __stdcall sub_10864(int a1, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // esi
  NTSTATUS v4; // ebx
  PMDL MdlAddress; // eax
  PVOID MappedSystemVa; // eax
  struct _DEVICE_OBJECT *Irpa; // [esp+18h] [ebp+Ch]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irpa = (struct _DEVICE_OBJECT *)sub_107B4((int)Irp);
  if ( Irpa )
  {
    MdlAddress = Irp->MdlAddress;
    if ( (MdlAddress->MdlFlags & 5) != 0 )
      MappedSystemVa = MdlAddress->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0, 0, 0x10u);
    if ( MappedSystemVa )
    {
      v4 = sub_1060C(
             Irpa,
             MappedSystemVa,
             CurrentStackLocation->Parameters.Read.Length,
             CurrentStackLocation->Parameters.Read.ByteOffset,
             1);
      if ( !v4 )
        Irp->IoStatus.Information = CurrentStackLocation->Parameters.Read.Length << 9;
    }
    else
    {
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return v4;
}

//----- (000108EE) --------------------------------------------------------
NTSTATUS __stdcall sub_108EE(int a1, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // eax
  int FileObject; // esi
  unsigned __int16 v4; // ax
  WCHAR *PoolWithTag; // eax
  PDEVICE_OBJECT v6; // eax
  PDEVICE_OBJECT AttachedDeviceReference; // edi
  NTSTATUS v8; // esi
  UNICODE_STRING String; // [esp+8h] [ebp-14h] BYREF
  PVOID Object; // [esp+10h] [ebp-Ch]
  ULONG Value; // [esp+14h] [ebp-8h] BYREF
  NTSTATUS v13; // [esp+18h] [ebp-4h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Value = 0;
  String.Buffer = 0;
  if ( CurrentStackLocation
    && (FileObject = (int)CurrentStackLocation->FileObject) != 0
    && (v4 = *(_WORD *)(FileObject + 48), v4 > 1u) )
  {
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPool, v4, 0x72647365u);
    String.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      String.Length = *(_WORD *)(FileObject + 48) - 2;
      String.MaximumLength = *(_WORD *)(FileObject + 48);
      memcpy(PoolWithTag, (const void *)(*(_DWORD *)(FileObject + 52) + 2), *(unsigned __int16 *)(FileObject + 48) - 2);
      v13 = RtlUnicodeStringToInteger(&String, 0xAu, &Value);
      if ( !v13 )
      {
        if ( Value < 0x64 && (v6 = sub_104E0(FileObject, Value, 0)) != 0 )
        {
          Object = v6;
          AttachedDeviceReference = IoGetAttachedDeviceReference(v6);
          if ( AttachedDeviceReference )
          {
            ObfDereferenceObject(Object);
            *(_DWORD *)(FileObject + 16) = AttachedDeviceReference;
            Irp->IoStatus.Information = 0;
          }
          else
          {
            v13 = -1073741811;
          }
        }
        else
        {
          v13 = -1073741811;
        }
      }
    }
    else
    {
      v13 = -1073741670;
    }
    if ( String.Buffer )
    {
      ExFreePoolWithTag(String.Buffer, 0);
      String.Buffer = 0;
      String.Length = 0;
      String.MaximumLength = 0;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  v8 = v13;
  Irp->IoStatus.Status = v13;
  IofCompleteRequest(Irp, 0);
  return v8;
}

//----- (00010A0E) --------------------------------------------------------
int __stdcall sub_10A0E(int a1, PIRP Irp)
{
  void *v2; // eax
  void *v3; // ebx

  v2 = (void *)sub_107B4((int)Irp);
  if ( v2 )
  {
    v3 = *(void **)(*(_DWORD *)(Irp->Tail.Overlay.PacketType + 24) + 12);
    ObfDereferenceObject(v2);
    if ( v3 )
      ObfDereferenceObject(v3);
  }
  Irp->IoStatus.Information = 0;
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0;
}

//----- (00010A5E) --------------------------------------------------------
NTSTATUS __stdcall sub_10A5E(int a1, IRP *DeviceObject)
{
  ULONG *p_MajorFunction; // esi
  struct _DEVICE_OBJECT *v4; // eax
  NTSTATUS Status; // esi
  struct _DEVICE_OBJECT *MasterIrp; // edi
  IRP *v7; // eax
  struct _KEVENT Event; // [esp+8h] [ebp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+18h] [ebp-8h] BYREF
  struct _DEVICE_OBJECT *DeviceObjecta; // [esp+2Ch] [ebp+Ch]

  p_MajorFunction = (ULONG *)&DeviceObject->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v4 = (struct _DEVICE_OBJECT *)sub_107B4((int)DeviceObject);
  if ( v4 )
  {
    DeviceObjecta = IoGetAttachedDeviceReference(v4);
    if ( DeviceObjecta )
    {
      MasterIrp = (struct _DEVICE_OBJECT *)DeviceObject->AssociatedIrp.MasterIrp;
      if ( MasterIrp )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v7 = IoBuildDeviceIoControlRequest(
               p_MajorFunction[3],
               DeviceObjecta,
               MasterIrp,
               p_MajorFunction[2],
               MasterIrp,
               p_MajorFunction[1],
               0,
               &Event,
               &IoStatusBlock);
        if ( v7 )
        {
          Status = IofCallDriver(DeviceObjecta, v7);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
            Status = IoStatusBlock.Status;
          }
          DeviceObject->IoStatus.Information = IoStatusBlock.Information;
        }
        else
        {
          Status = -1073741670;
        }
      }
      else
      {
        Status = -1073741811;
      }
    }
    else
    {
      Status = -1073741811;
    }
    if ( DeviceObjecta )
      ObfDereferenceObject(DeviceObjecta);
  }
  else
  {
    Status = -1073741811;
  }
  DeviceObject->IoStatus.Status = Status;
  IofCompleteRequest(DeviceObject, 0);
  return Status;
}

//----- (00010B34) --------------------------------------------------------
PDRIVER_OBJECT __stdcall sub_10B34(PDRIVER_OBJECT DriverObject, int a2)
{
  PDRIVER_OBJECT DriverObjecta; // [esp+14h] [ebp+8h]

  RtlInitUnicodeString(&DeviceName, L"\\Device\\EPMNTDRV");
  RtlInitUnicodeString(&SymbolicLinkName, &word_11A02);
  DriverObjecta = (PDRIVER_OBJECT)IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0, 0, &DeviceObject);
  if ( (int)DriverObjecta >= 0 )
  {
    DriverObjecta = (PDRIVER_OBJECT)IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
    if ( (int)DriverObjecta >= 0 )
    {
      DeviceObject->Flags |= 0x10u;
      DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)sub_108EE;
      DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)sub_10A0E;
      DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)sub_10A5E;
      DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)sub_10790;
      DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)sub_10864;
      DriverObject->MajorFunction[4] = (PDRIVER_DISPATCH)sub_107DA;
      DriverObject->DriverUnload = (PDRIVER_UNLOAD)sub_104C0;
    }
    else
    {
      IoDeleteDevice(DeviceObject);
    }
  }
  return DriverObjecta;
}

//----- (00010BE3) --------------------------------------------------------
void __thiscall sub_10BE3(void *this)
{
  if ( this != (void *)BugCheckParameter2 )
    KeBugCheckEx(0xF7u, (ULONG_PTR)this, BugCheckParameter2, BugCheckParameter3, 0);
}

//----- (00010C46) --------------------------------------------------------
int __stdcall sub_10C46(_WORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int result; // eax

  v3 = a2;
  result = 0;
  if ( !a2 )
    goto LABEL_5;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  if ( !v3 )
LABEL_5:
    result = -1073741811;
  if ( a3 )
  {
    if ( result < 0 )
      *a3 = 0;
    else
      *a3 = a2 - v3;
  }
  return result;
}

//----- (00010C8C) --------------------------------------------------------
int __stdcall sub_10C8C(_WORD *a1, unsigned int a2, _DWORD *a3, unsigned int a4)
{
  int result; // eax

  result = 0;
  if ( !a2 || a2 > a4 )
    result = -1073741811;
  if ( a3 )
  {
    if ( result < 0 )
      *a3 = 0;
    else
      return sub_10C46(a1, a2, a3);
  }
  return result;
}

//----- (00010CC8) --------------------------------------------------------
int __stdcall sub_10CC8(wchar_t *Dest, int a2, int *a3, wchar_t *Format, va_list Args)
{
  int v5; // ebx
  unsigned int v6; // esi
  int v7; // eax

  v5 = 0;
  v6 = a2 - 1;
  v7 = _vsnwprintf(Dest, a2 - 1, Format, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    Dest[v6] = 0;
    v5 = -2147483643;
  }
  else
  {
    if ( v7 != v6 )
      goto LABEL_7;
    Dest[v6] = 0;
  }
  v7 = a2 - 1;
LABEL_7:
  if ( a3 )
    *a3 = v7;
  return v5;
}

//----- (00010E16) --------------------------------------------------------
ULONG sub_10E16()
{
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}

//----- (00011D05) --------------------------------------------------------
NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned int v2; // eax
  _DWORD *LowPart; // et1

  v2 = BugCheckParameter2;
  if ( !BugCheckParameter2 || BugCheckParameter2 == -1153374642 )
  {
    LowPart = (_DWORD *)KeTickCount.LowPart;
    v2 = (unsigned int)&BugCheckParameter2 ^ *LowPart;
    BugCheckParameter2 = v2;
    if ( !v2 )
    {
      v2 = -1153374642;
      BugCheckParameter2 = -1153374642;
    }
  }
  BugCheckParameter3 = ~v2;
  return (NTSTATUS)sub_10B34(DriverObject, (int)RegistryPath);
}

// nfuncs=36 queued=20 decompiled=20 lumina nreq=0 worse=0 better=0
// ALL OK, 20 function(s) have been successfully decompiled
