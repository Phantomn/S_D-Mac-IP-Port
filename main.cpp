#include <stdint.h>
#include <stdio.h>

static uint8_t packet[] =
"\x2c\x21\x72\x93\xdf\x00\x38\x00\x25\x56\x0a\xb8\x08\x00\x45\x00" \
"\x02\x0d\x24\x37\x40\x00\x80\x06\x00\x00\xc0\xa8\x03\x98\xaf\xd5" \
"\x23\x27\xdd\x6e\x00\x50\x19\xd1\x9a\xec\x57\x4a\xe7\xf9\x50\x18" \
"\x02\x00\x99\x3c\x00\x00\x47\x45\x54\x20\x2f\x20\x48\x54\x54\x50" \
"\x2f\x31\x2e\x31\x0d\x0a\x48\x6f\x73\x74\x3a\x20\x74\x65\x73\x74" \
"\x2e\x67\x69\x6c\x67\x69\x6c\x2e\x6e\x65\x74\x0d\x0a\x43\x6f\x6e" \
"\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x6b\x65\x65\x70\x2d\x61\x6c" \
"\x69\x76\x65\x0d\x0a\x43\x61\x63\x68\x65\x2d\x43\x6f\x6e\x74\x72" \
"\x6f\x6c\x3a\x20\x6d\x61\x78\x2d\x61\x67\x65\x3d\x30\x0d\x0a\x55" \
"\x70\x67\x72\x61\x64\x65\x2d\x49\x6e\x73\x65\x63\x75\x72\x65\x2d" \
"\x52\x65\x71\x75\x65\x73\x74\x73\x3a\x20\x31\x0d\x0a\x55\x73\x65" \
"\x72\x2d\x41\x67\x65\x6e\x74\x3a\x20\x4d\x6f\x7a\x69\x6c\x6c\x61" \
"\x2f\x35\x2e\x30\x20\x28\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54" \
"\x20\x31\x30\x2e\x30\x3b\x20\x57\x69\x6e\x36\x34\x3b\x20\x78\x36" \
"\x34\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35" \
"\x33\x37\x2e\x33\x36\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69" \
"\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65" \
"\x2f\x37\x35\x2e\x30\x2e\x33\x37\x37\x30\x2e\x31\x30\x30\x20\x53" \
"\x61\x66\x61\x72\x69\x2f\x35\x33\x37\x2e\x33\x36\x0d\x0a\x41\x63" \
"\x63\x65\x70\x74\x3a\x20\x74\x65\x78\x74\x2f\x68\x74\x6d\x6c\x2c" \
"\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x68\x74\x6d" \
"\x6c\x2b\x78\x6d\x6c\x2c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f" \
"\x6e\x2f\x78\x6d\x6c\x3b\x71\x3d\x30\x2e\x39\x2c\x69\x6d\x61\x67" \
"\x65\x2f\x77\x65\x62\x70\x2c\x69\x6d\x61\x67\x65\x2f\x61\x70\x6e" \
"\x67\x2c\x2a\x2f\x2a\x3b\x71\x3d\x30\x2e\x38\x2c\x61\x70\x70\x6c" \
"\x69\x63\x61\x74\x69\x6f\x6e\x2f\x73\x69\x67\x6e\x65\x64\x2d\x65" \
"\x78\x63\x68\x61\x6e\x67\x65\x3b\x76\x3d\x62\x33\x0d\x0a\x41\x63" \
"\x63\x65\x70\x74\x2d\x45\x6e\x63\x6f\x64\x69\x6e\x67\x3a\x20\x67" \
"\x7a\x69\x70\x2c\x20\x64\x65\x66\x6c\x61\x74\x65\x0d\x0a\x41\x63" \
"\x63\x65\x70\x74\x2d\x4c\x61\x6e\x67\x75\x61\x67\x65\x3a\x20\x6b" \
"\x6f\x2d\x4b\x52\x2c\x6b\x6f\x3b\x71\x3d\x30\x2e\x39\x2c\x65\x6e" \
"\x2d\x55\x53\x3b\x71\x3d\x30\x2e\x38\x2c\x65\x6e\x3b\x71\x3d\x30" \
"\x2e\x37\x2c\x7a\x68\x2d\x43\x4e\x3b\x71\x3d\x30\x2e\x36\x2c\x7a" \
"\x68\x3b\x71\x3d\x30\x2e\x35\x0d\x0a\x0d\x0a";

void print_mac(uint8_t* mac){
	printf("%02x:%02x:%02x:%02x:%02x:%02x\n",mac[0],mac[1],mac[2],mac[3],mac[4],packet[5]);
}
void print_ip(uint8_t* ip){
	printf("%d.%d.%d.%d\n",ip[0],ip[1],ip[2],ip[3]);
}
void print_port(uint8_t* port){
	printf("%d\n", (port[0] << 8) | port[1]);
//	printf("%d\n",port[0]*256+port[1]);
}

int main(){
	printf("Destination Mac : ");print_mac(&packet[0]);
	printf("Source Mac : ");print_mac(&packet[6]);
	printf("Source IP : ");print_ip(&packet[14+12]);
	printf("Destination IP : ");print_ip(&packet[14+12+16]);
	printf("Source Port : ");print_port(&packet[34]);
	printf("Destination Port : ");print_port(&packet[34+2]);
}
