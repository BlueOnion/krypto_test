#include "common.h"

#include <botan/block_cipher.h>
#include <botan/hex.h>

using namespace std;

void botan_aes_test() {
	
	vector <uint8_t> key = Botan::hex_decode(key256);
	vector <uint8_t> block = Botan::hex_decode(test_text32);
	
	unique_ptr<Botan::BlockCipher> cipher(Botan::BlockCipher::create("AES-256"));
	
	cipher->set_key(key);
	cipher->encrypt(block);
}




int main () {
	
	Test t = new Test("wynik_botan.csv");
	
	t->start = clock();
	botan_aes_test();
	t->stop = clock();
	t->pomiar("AES256");
	
   
	return 0;
}