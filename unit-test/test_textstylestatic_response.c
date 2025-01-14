#ifndef textstylestatic_response_TEST
#define textstylestatic_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define textstylestatic_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/textstylestatic_response.h"
textstylestatic_response_t* instantiate_textstylestatic_response(int include_optional);



textstylestatic_response_t* instantiate_textstylestatic_response(int include_optional) {
  textstylestatic_response_t* textstylestatic_response = NULL;
  if (include_optional) {
    textstylestatic_response = textstylestatic_response_create(
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
    textstylestatic_response = textstylestatic_response_create(
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

  return textstylestatic_response;
}


#ifdef textstylestatic_response_MAIN

void test_textstylestatic_response(int include_optional) {
    textstylestatic_response_t* textstylestatic_response_1 = instantiate_textstylestatic_response(include_optional);

	cJSON* jsontextstylestatic_response_1 = textstylestatic_response_convertToJSON(textstylestatic_response_1);
	printf("textstylestatic_response :\n%s\n", cJSON_Print(jsontextstylestatic_response_1));
	textstylestatic_response_t* textstylestatic_response_2 = textstylestatic_response_parseFromJSON(jsontextstylestatic_response_1);
	cJSON* jsontextstylestatic_response_2 = textstylestatic_response_convertToJSON(textstylestatic_response_2);
	printf("repeating textstylestatic_response:\n%s\n", cJSON_Print(jsontextstylestatic_response_2));
}

int main() {
  test_textstylestatic_response(1);
  test_textstylestatic_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // textstylestatic_response_MAIN
#endif // textstylestatic_response_TEST
