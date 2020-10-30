def kadane(a,size): 
    msf=-1000000000-1
    meh=0 
    for i in range(0,size): 
        meh=meh+a[i] 
        if (msf<meh): 
            msf=meh 
  
        if meh<0: 
            meh=0   
    return msf 