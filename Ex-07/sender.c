#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int MAX_SEQ=7;
typedef struct frame{
    int seq_no;
    int ack_no;
    char info;
} F;

void send_frame(int frame_no,int frame_expected,char data){
    F s;
    s.seq_no=frame_no;
    s.ack_no=(frame_expected+MAX_SEQ)%(MAX_SEQ+1);
    s.info=data;
    
}

int main(){
    int buff_size=(MAX_SEQ+1)/2,
    frame_exp=0,
    next_frame_to_send=0,
    ack_expected=0,
    window_boundary=buff_size,
    outbuffer[buff_size],
    inbuffer[buff_size];
    bool arraived[buff_size];
    for(int i=0;i<buff_size;i++)
        arraived[i]=false;
    

}