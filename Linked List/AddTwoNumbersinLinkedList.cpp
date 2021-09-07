 struct Node* addTwoLists(struct Node* first, struct Node* second)
    {   
        string a,b,c;
        while(first){
            a=a+to_string(first->data);
            first=first->next;
        }
        while(second)
        {
            b=b+to_string(second->data);
            second=second->next;
        }
        
        int m=a.length()-1,n=b.length()-1;
        int carry=0;
        while(m>=0&&n>=0){
            int temp=(a[m]-'0')+(b[n]-'0')+carry;
            carry=0;
            if(temp>=10){
                carry=1;
                temp-=10;
            }
            c=c+to_string(temp);
            m--,n--;
        }
        while(m>=0){
            int temp=(a[m]-'0')+carry;
            carry=0;
            if(temp>=10){
                carry=1;
                temp-=10;
            }
            c=c+to_string(temp);
            m--;
        }
         while(n>=0){
            int temp=(b[n]-'0')+carry;
            carry=0;
            if(temp>=10){
                carry=1;
                temp-=10;
            }
            c=c+to_string(temp);
            n--;
        }
        if(carry){
            c=c+'1';
        }
        
        int l=c.length()-1;
        Node* iter=new Node(c[l]-'0');
        Node* ans= iter;
       
        l--;
        while(l>=0){
            Node* temp=new Node(c[l]-'0');
            iter->next=temp;
            iter=temp;
            l--;
        }
        return ans;
        
    }
