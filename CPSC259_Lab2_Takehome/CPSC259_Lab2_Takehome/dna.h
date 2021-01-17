/*
 File:        dna.h
 Purpose:     Contains constants, prototypes, and two
              helpful arrays.
 Author:		Clive Fransen and Mihir Bhatia
 Student #s:	11807328 and 76149921
 CS Accounts:	cfransen@students.cs.ubc.ca and mbhati01@students.cs.ubc.ca
 Date:			3 october 2020
 */

 /******************************************************************
  YOU MAY EDIT THIS FILE (but it is not necessary)

  If you add any constants define them in the list of #define
  statements.

  If you add any functions to the dna.c file, add their prototypes
  to the list of prototypes.
  ******************************************************************/

#pragma once

#define BUFSIZE           3500
#define ASCII_OFFSET        48
#define CODON_SYMBOL_LENGTH  4
#define CODON_LENGTH         3
#define CODON_NAME_LENGTH   14
#define NUMBER_OF_CODONS    64

  /* Insert function prototypes here */

int    is_base_pair(char nucleotide_1, char nucleotide_2);
int    get_codon_index(char* codon_code);
int    extract_dna(FILE* file_pointer, char** sample_segment, char*** candidate_segments);
void   analyze_segments(char* sample_segment, char** candidate_segments, int number_of_candidates, char* output_string);
int    calculate_score(char* sample_segment, char* candidate_segment);

static char codon_codes[NUMBER_OF_CODONS][CODON_SYMBOL_LENGTH] =
{ "TTT", "TTC", "TTA", "TTG", "CTT", "CTC",
  "CTA", "CTG", "ATT", "ATC", "ATA", "ATG",
    "GTT", "GTC", "GTA", "GTG", "TCT", "TCC",
  "TCA", "TCG", "CCT", "CCC", "CCA", "CCG",
    "ACT", "ACC", "ACA", "ACG", "GCT", "GCC",
  "GCA", "GCG", "TAT", "TAC", "TAA", "TAG",
    "CAT", "CAC", "CAA", "CAG", "AAT", "AAC",
  "AAA", "AAG", "GAT", "GAC", "GAA", "GAG",
    "TGT", "TGC", "TGA", "TGG", "CGT", "CGC",
  "CGA", "CGG", "AGT", "AGC", "AGA", "AGG",
    "GGT", "GGC", "GGA", "GGG" };

static char codon_names[NUMBER_OF_CODONS][CODON_NAME_LENGTH] =
{ "phenylalanine", "phenylalanine", "leucine",       "leucine",       "leucine",       "leucine",
"leucine",       "leucine",       "isoleucine",    "isoleucine",    "isoleucine",    "methionine",
"valine",        "valine",        "valine",        "valine",        "serine",        "serine",
"serine",        "serine",        "proline",       "proline",       "proline",       "proline",
"threonine",     "threonine",     "threonine",     "threonine",     "alanine",       "alanine",
"alanine",       "alanine",       "tyrosine",      "tyrosine",      "stop",          "stop",
"histidine",     "histidine",     "glutamine",     "glutamine",     "asparagine",    "asparagine",
"lysine",        "lysine",        "aspartic acid", "aspartic acid", "glutamic acid", "glutamic acid",
"cysteine",      "cysteine",      "stop",          "tryptophan",    "arginine",      "arginine",
"arginine",      "arginine",      "serine",        "serine",        "arginine",      "arginine",
"glycine",       "glycine",       "glycine",       "glycine" };
