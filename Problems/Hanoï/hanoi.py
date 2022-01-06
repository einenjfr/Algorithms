#################
###HANOI TOWERS##
#################
#################
#DESCRIPTION : The game consist in three towers. The first one has t pieces and the others
#               none. The objective is to place the tower to the last tower with a LIFO
#               order.
#################

#Recursive algorithm
def recur (ori, aux, obj, n) :
    print(str(n) + " : " + str(obj) + " " + str(aux) + " " + str(ori))
    if n != 0 :
        recur(obj,ori,aux,n-1)

###BEGIN###
print("Nombre of pieces")
t = int(input())

#Number of moviments to make
n = pow(2,t) -2                 # n = 2^-1. As the first movement is known, n = 2^-2
print (str(n) + " : 0 1 2")     # The last piece of the tower whose number is 2 must be
                                #   be placed to the tower whose number is 0.
recur (0,1,2,n)                 # Call to the recrsive funciton
