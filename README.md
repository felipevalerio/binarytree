## What is it?

It's just a binary tree


## Why?

Because I see trees everywhere, and I'm not talking about real trees.
Most things that I like to study have somekind of tree on it. Databases, data compressions just to name two of them.


## What's the problem with that?

None. The thing is that its been a while since I wrote a tree (binary tree), it was in college fucking 6 years ago.
My current job don't require me to write one, so I'm out of practice and I want to have a deep understanding about databases
and to do that I have to remember how to build a binary tree (of course not only that but that's a different story).


## But how's a tree used in a database?

I'm glad you asked that, dear anon. A database system (DBMS) can be seen as just a bunch of softwares pilled [together](https://www.mongodb.com/resources/basics/database-management-system).
Take the storage engine for example. It's responsible for storing, retrieving and organizing/managing data in memory and on disk in a persistent manner. 
The data is stored in something called *data files*, and how those files are organized? You got it, with a tree data structure. [B-Trees](https://en.wikipedia.org/wiki/B-tree) or [LSM Trees](https://en.wikipedia.org/wiki/Log-structured_merge-tree)

But let's get out of the storage engine part, let's see the query engine, the real deal. Well, here we can find a tree data structure right from the begining.
When we write a SQL query like `SELECT id, name FROM t_user WHERE status = 'ACTIVE' AND age > 18` the query will go to the lexical parser which will split the query into atomic symbols called Tokens.
Tokens are classified into keywords (like SELECT for example), operators (+, * etc...), conditions ( =, AND) you got the idea. And then the parser will represent those tokens as an AST [Abstract Syntatic Tree](https://en.wikipedia.org/wiki/Abstract_syntax_tree)
[Check this out](https://shardingsphere.apache.org/document/current/en/reference/sharding/parse/).

Pretty cool, right?


## Conclusion?

In college I couldn't really understand the practical use of a tree data structure, and it was just one class about this topic.
So I've always seen these kind of structure as a problem...
