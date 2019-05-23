#include "aes-encrypt.c"
#include "aes-encrypt-table.c"
#include "aes-encrypt-internal.c"
#include "aes-set-encrypt-key.c"
#include "common_functions.h"

int main() {
	
	unsigned char plain_text[AES_BLOCK_SIZE] = "496e20746865204c616e64206f66204d";
	unsigned char cipher_text[AES_BLOCK_SIZE];
	unsigned char key[AES256_KEY_SIZE] = "664f324b556a71563939573854424e314733596761426545674c4171376c626d";

	struct aes_ctx context;

	Test t = new Test("wynik_nettle.csv");

	t->start = clock();
	
	aes_set_encrypt_key(&context, AES256_KEY_SIZE, key_default);
	aes_encrypt(&context, AES_BLOCK_SIZE, cipher_text, plain_text);
	
	t->stop = clock();
	t->pomiar("AES256");
	

}