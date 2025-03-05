'''
A. Skibidus and Amog'u
time limit per test
1 second
memory limit per test
256 megabytes

Skibidus lands on a foreign planet, where the local Amog tribe speaks the Amog'u language. In Amog'u, there are two forms of nouns, which are singular and plural.

Given that the root of the noun is transcribed as S

, the two forms are transcribed as:

    Singular: S

+
"us"
Plural: S
+

    "i" 

Here, +
denotes string concatenation. For example, abc + def =

abcdef.

For example, when S

is transcribed as "amog", then the singular form is transcribed as "amogus", and the plural form is transcribed as "amogi". Do note that Amog'u nouns can have an empty root — in specific, "us" is the singular form of "i" (which, on an unrelated note, means "imposter" and "imposters" respectively).

Given a transcribed Amog'u noun in singular form, please convert it to the transcription of the corresponding plural noun.
'''


#!/bin/python
w = int( input() )
while w > 0:
	print(  input()[:-2] + 'i' )
	w -= 1
