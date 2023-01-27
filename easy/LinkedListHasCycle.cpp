/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//Vamos a intentar hacer el metodo de Floyd:
// 2 punteros, tortuga y liebre. Tortuga crece de a 1, liebre de a 2.
//Si hay un bucle estos dos se van a encontrar. (sus referencias van a ser las mismas (liebre == tortuga))
// Si no lo hay, entonces liebre llegara a NULL

    bool hasCycle(ListNode *head) {
            
            ListNode* liebre = head;
            ListNode* tortuga = head;

            if (liebre == NULL || liebre -> next == NULL){ 
                // tenemos que fijarnos si el actual o el next son null
                return false;
            }
            else{
                liebre = liebre ->next -> next; // si no, saltamos 2
            }

            while (liebre != NULL){             

                if (liebre == tortuga){          // si las referencias valores son iguales es que
                    return true;                 // se encontraron, por ende, es true.
                }

                if (liebre -> next != NULL){         // si no, me fijo si el next es NULL y salto acorde
                // si es NULL, no voy a poder saltar pues pedir el next al NULL rompe la consola

                    liebre = liebre -> next -> next; // liebre salta 2
                    tortuga = tortuga -> next;       // tortuga salta 1
                }
                else{
                    return false;                   
                }

            }
            return false;   //si llegamos aca es que rompimos el while, osea que liebre == NULL

        }
};

/*Complejidades:

Temporal: O(n), ya que en el peor de los casos, la liebre y la tortuga recorrerían toda la lista enlazada antes de encontrarse en un ciclo.

Espacial: O(1), ya que solo se utilizan dos punteros (liebre y tortuga) para recorrer la lista.
*/


