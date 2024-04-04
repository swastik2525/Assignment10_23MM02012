#include<stdio.h>
#define CONTROL_PACKET 0
#define DATA_PACKET 1
#define MAX_PACKET 5

int main() {
    union Packet
    {
        struct ControlMessage
        {
            int opcode;
            int statuscode;
        }cm;

        struct DataPaylode
        {

            char code[20];
        }dp;
    };

    struct DataPacket
    {
        union Packet packet;
        int flag;

            
    };

    struct DataPacket dPackets[5];
    int num;
    printf("Enter number of records to enter:");
    scanf("%d",&num);

    if (num<=0 || num>5) 
    {
        printf("Invalid number of packets!\n");
        return 1;
    }

   for(int i=0;i<num;i++)
   {
    printf("\n Packet %d\n",i+1);
    printf("Enter 0 for Control Packet or 1 for Data Payload:");
    scanf("%d",&dPackets[i].flag);

    if(dPackets[i].flag==CONTROL_PACKET)
    {
        printf("Enter opcode: ");
        scanf("%d",&dPackets[i].packet.cm.opcode);
        printf("Enter statuscode: ");
        scanf("%d",&dPackets[i].packet.cm.statuscode);
        getchar();
    }
    
    else if(dPackets[i].flag==DATA_PACKET)
    {
        printf("Enter Data Payload:");
        getchar();
        gets(dPackets[i].packet.dp.code);
    }
    else 
        printf("Invalid input!");
   }



   printf("\nPacket Cotents:\n");
   for(int i=0;i<num;i++)
   {
    printf("\n Packet %d \n",i+1);
    if (dPackets[i].flag==CONTROL_PACKET) 
    {
        printf("Control Packet:\n");
        printf("Opcode: %d\n",dPackets[i].packet.cm.opcode);
        printf("Statuscode: %d\n",dPackets[i].packet.cm.statuscode);
    } else if(dPackets[i].flag==DATA_PACKET) 
    {
        printf("Data Packet:\n");
        printf("Code: %s\n",dPackets[i].packet.dp.code);
    }
   }
   return 0;
}