 void linkdelete(struct Node  *head, int M, int N)
   {Node *t=head,*l;
    int p=0;
    while(t!=NULL){
        p++;
        if(p==M)
           l=t;
        if(p==M+N)
           {l->next=t->next;
            p=0;
           }
        t=t->next;
    }
    if(p<M+N && p>M)
      l->next=NULL;
   }
