
Time complexity : O(n)...using Range
Using Lower Bound and Upper bound Method.

public class solution
{
    //Functiion to check whether a Binary tree is BST or not.
    boolean isBST(Node root)
    {
        return isBSTUtils(root, Integer.MIN_VALUE, Integer.MAX_VALUE);
    }

    boolean isBSTUtils(Node node, int min, int max)
    {
        if(node == NULL)
        return true;

        if(node.data < min || node.data > max)
        return false;

        return (isBSTUtils(node.left, min, node.data-1) && isBSTUtils(node.right, node.data+1, max));
    }

    Time complexity : O(h)...Using Inorder Traversal

    Node prev = NULL;
    boolean isBST(Node node){
        if(node!= NULL)
        {
            if(!isBST(node.left))
            return false;

            if(prev !=NULL && node.data <= prev.data)
            return false;
            
            prev = node;

            return isBST(node.right);
        }
        return true;
    }

}

************************************************************************************************************

