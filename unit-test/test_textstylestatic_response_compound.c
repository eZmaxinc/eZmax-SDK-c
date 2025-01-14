#ifndef textstylestatic_response_compound_TEST
#define textstylestatic_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define textstylestatic_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/textstylestatic_response_compound.h"
textstylestatic_response_compound_t* instantiate_textstylestatic_response_compound(int include_optional);



textstylestatic_response_compound_t* instantiate_textstylestatic_response_compound(int include_optional) {
  textstylestatic_response_compound_t* textstylestatic_response_compound = NULL;
  if (include_optional) {
    textstylestatic_response_compound = textstylestatic_response_compound_create(
      216,
      1,
      "Arial",
      true,
      true,
      true,
      true,
      3752795,
      12
    );
  } else {
    textstylestatic_response_compound = textstylestatic_response_compound_create(
      216,
      1,
      "Arial",
      true,
      true,
      true,
      true,
      3752795,
      12
    );
  }

  return textstylestatic_response_compound;
}


#ifdef textstylestatic_response_compound_MAIN

void test_textstylestatic_response_compound(int include_optional) {
    textstylestatic_response_compound_t* textstylestatic_response_compound_1 = instantiate_textstylestatic_response_compound(include_optional);

	cJSON* jsontextstylestatic_response_compound_1 = textstylestatic_response_compound_convertToJSON(textstylestatic_response_compound_1);
	printf("textstylestatic_response_compound :\n%s\n", cJSON_Print(jsontextstylestatic_response_compound_1));
	textstylestatic_response_compound_t* textstylestatic_response_compound_2 = textstylestatic_response_compound_parseFromJSON(jsontextstylestatic_response_compound_1);
	cJSON* jsontextstylestatic_response_compound_2 = textstylestatic_response_compound_convertToJSON(textstylestatic_response_compound_2);
	printf("repeating textstylestatic_response_compound:\n%s\n", cJSON_Print(jsontextstylestatic_response_compound_2));
}

int main() {
  test_textstylestatic_response_compound(1);
  test_textstylestatic_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // textstylestatic_response_compound_MAIN
#endif // textstylestatic_response_compound_TEST
