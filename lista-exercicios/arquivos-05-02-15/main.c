#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
  int n_column, n_lines, n_samples;
  float value;

  FILE * input_file;
  FILE * output_file;

  input_file = fopen(argv[1], "r");
  output_file = fopen(argv[2], "w");

  n_column = atoi(argv[3]);
  n_lines = atoi(argv[4]);
  n_samples = atoi(argv[5]);

  int i,j;
  if (n_column == 59)
  {
    for (i = 0; i < n_lines; ++i)
    {
      fprintf(output_file, "%d\t", (i/n_samples) );
      for (j = 0; j < n_column; ++j)
      {
        fscanf(input_file,"%e", &value); 
        fprintf(output_file, "%d:%f\t", j, value);
      }
      fprintf(output_file, "\n");
    }
  }
  else
  {
    for (i = 0; i < n_lines; ++i)
    {
      fprintf(output_file, "%d\t", (i/n_samples) );
      for (j = 0; j < n_column - 1; ++j)
      {
        fscanf(input_file,"%e", &value); 
        fprintf(output_file, "%d:%f\t", j, value);
      }
      fprintf(output_file, "\n");
    }
  }

  fclose(input_file);
  fclose(output_file);

  return 0;
}
