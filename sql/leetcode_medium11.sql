Table: Tree

+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| p_id        | int  |
+-------------+------+
id is the column with unique values for this table.
Each row of this table contains information about the id of a node and the id of its parent node in a tree.
The given structure is always a valid tree.

 

Each node in the tree can be one of three types:

    "Leaf": if the node is a leaf node.
    "Root": if the node is the root of the tree.
    "Inner": If the node is neither a leaf node nor a root node.

Write a solution to report the type of each node in the tree.

Return the result table in any order.

The result format is in the following example.




/* Write your PL/SQL query statement below */
SELECT id, 'Root' type
FROM Tree
WHERE p_id IS NULL
UNION
SELECT t1.id , 'Inner' type
FROM Tree t1, Tree t2
WHERE t1.id = t2.p_id AND t1.p_id <> t2.p_id
UNION
SELECT id, 'Leaf' type
FROM (SELECT *
      FROM tree
      WHERE p_id IS NOT NULL)t
WHERE NOT EXISTS(SELECT 1
                 FROM (SELECT *
                       FROM tree
                       WHERE p_id IS NOT NULL) t2
                 WHERE t.id = t2.p_id);
