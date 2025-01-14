#ifndef textstylestatic_request_compound_TEST
#define textstylestatic_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define textstylestatic_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/textstylestatic_request_compound.h"
textstylestatic_request_compound_t* instantiate_textstylestatic_request_compound(int include_optional);



textstylestatic_request_compound_t* instantiate_textstylestatic_request_compound(int include_optional) {
  textstylestatic_request_compound_t* textstylestatic_request_compound = NULL;
  if (include_optional) {
    textstylestatic_request_compound = textstylestatic_request_compound_create(
      1,
      true,
      true,
      true,
      true,
      3752795,
      12
    );
  } else {
    textstylestatic_request_compound = textstylestatic_request_compound_create(
      1,
      true,
      true,
      true,
      true,
      3752795,
      12
    );
  }

  return textstylestatic_request_compound;
}


#ifdef textstylestatic_request_compound_MAIN

void test_textstylestatic_request_compound(int include_optional) {
    textstylestatic_request_compound_t* textstylestatic_request_compound_1 = instantiate_textstylestatic_request_compound(include_optional);

	cJSON* jsontextstylestatic_request_compound_1 = textstylestatic_request_compound_convertToJSON(textstylestatic_request_compound_1);
	printf("textstylestatic_request_compound :\n%s\n", cJSON_Print(jsontextstylestatic_request_compound_1));
	textstylestatic_request_compound_t* textstylestatic_request_compound_2 = textstylestatic_request_compound_parseFromJSON(jsontextstylestatic_request_compound_1);
	cJSON* jsontextstylestatic_request_compound_2 = textstylestatic_request_compound_convertToJSON(textstylestatic_request_compound_2);
	printf("repeating textstylestatic_request_compound:\n%s\n", cJSON_Print(jsontextstylestatic_request_compound_2));
}

int main() {
  test_textstylestatic_request_compound(1);
  test_textstylestatic_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // textstylestatic_request_compound_MAIN
#endif // textstylestatic_request_compound_TEST
