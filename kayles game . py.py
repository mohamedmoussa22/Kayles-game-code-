list1=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
final_list=['_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_']
playernum=0
print(list1)
while True:
    if playernum==0 or playernum==1 or playernum==2:
        if playernum==0:
            playernum=playernum+1
        elif playernum==1:
            playernum=playernum+1
        elif playernum==2:
            playernum=playernum-1
        while True:
            print('player'+str(playernum)+'turn')
            m=float(input('enter the frist number :'))
            if m not in list1:
                print('this number is out of range.')
                continue
            c=float(input('enter the seconed number or press 0 to end : '))
            if c==0:
                list1[list1.index(m)]='_'
                break
            elif c>m+1 or c<m-1 or c==m :
                print('this number is not adjacent')
                continue
            elif c in list1:
                list1[list1.index(m)]='_'
                list1[list1.index(c)]='_'
                break 
            elif c not in list1:
                print('this number is out of range')
                continue
        if list1==final_list:
             print(list1)
             print('player' + str(playernum) +'won')
             input(' press enter to exit ')
             break
        else:
             print(list1)
             continue
             
