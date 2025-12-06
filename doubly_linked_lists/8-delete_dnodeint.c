#include "lists.h"

/**
 * delete_dnodeint_at_index - supprime le nœud à l'index donné d'une liste doublement chaînée
 * @head: pointeur vers le pointeur du premier nœud de la liste
 * @index: index du nœud à supprimer (commence à 0)
 *
 * Description: La fonction parcourt la liste pour trouver le nœud à l'index spécifié.
 *              Si le nœud existe, elle met à jour les pointeurs des nœuds voisins
 *              (prev et next), libère la mémoire du nœud et retourne 1.
 *              Si le nœud n'existe pas ou si la liste est vide, retourne -1.
 *
 * Retour: 1 si la suppression a réussi, -1 si elle a échoué.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    
}