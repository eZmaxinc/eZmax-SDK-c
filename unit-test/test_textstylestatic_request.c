#ifndef textstylestatic_request_TEST
#define textstylestatic_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define textstylestatic_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/textstylestatic_request.h"
textstylestatic_request_t* instantiate_textstylestatic_request(int include_optional);



textstylestatic_request_t* instantiate_textstylestatic_request(int include_optional) {
  textstylestatic_request_t* textstylestatic_request = NULL;
  if (include_optional) {
    textstylestatic_request = textstylestatic_request_create(
      1,
      true,
      true,
      true,
      true,
      3752795,
      12
    );
  } else {
    textstylestatic_request = textstylestatic_request_create(
      1,
      true,
      true,
      true,
      true,
      3752795,
      12
    );
  }

  return textstylestatic_request;
}


#ifdef textstylestatic_request_MAIN

void test_textstylestatic_request(int include_optional) {
    textstylestatic_request_t* textstylestatic_request_1 = instantiate_textstylestatic_request(include_optional);

	cJSON* jsontextstylestatic_request_1 = textstylestatic_request_convertToJSON(textstylestatic_request_1);
	printf("textstylestatic_request :\n%s\n", cJSON_Print(jsontextstylestatic_request_1));
	textstylestatic_request_t* textstylestatic_request_2 = textstylestatic_request_parseFromJSON(jsontextstylestatic_request_1);
	cJSON* jsontextstylestatic_request_2 = textstylestatic_request_convertToJSON(textstylestatic_request_2);
	printf("repeating textstylestatic_request:\n%s\n", cJSON_Print(jsontextstylestatic_request_2));
}

int main() {
  test_textstylestatic_request(1);
  test_textstylestatic_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // textstylestatic_request_MAIN
#endif // textstylestatic_request_TEST
