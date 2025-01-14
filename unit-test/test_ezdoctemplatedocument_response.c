#ifndef ezdoctemplatedocument_response_TEST
#define ezdoctemplatedocument_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_response.h"
ezdoctemplatedocument_response_t* instantiate_ezdoctemplatedocument_response(int include_optional);

#include "test_multilingual_ezdoctemplatedocument_name.c"


ezdoctemplatedocument_response_t* instantiate_ezdoctemplatedocument_response(int include_optional) {
  ezdoctemplatedocument_response_t* ezdoctemplatedocument_response = NULL;
  if (include_optional) {
    ezdoctemplatedocument_response = ezdoctemplatedocument_response_create(
      95,
      2,
      5,
      7,
      4,
      ezmax_api_definition__full_ezdoctemplatedocument_response__Company,
      true,
       // false, not to have infinite recursion
      instantiate_multilingual_ezdoctemplatedocument_name(0),
      "Standard Contract",
      "Default",
      "Sale",
      "Real Estate"
    );
  } else {
    ezdoctemplatedocument_response = ezdoctemplatedocument_response_create(
      95,
      2,
      5,
      7,
      4,
      ezmax_api_definition__full_ezdoctemplatedocument_response__Company,
      true,
      NULL,
      "Standard Contract",
      "Default",
      "Sale",
      "Real Estate"
    );
  }

  return ezdoctemplatedocument_response;
}


#ifdef ezdoctemplatedocument_response_MAIN

void test_ezdoctemplatedocument_response(int include_optional) {
    ezdoctemplatedocument_response_t* ezdoctemplatedocument_response_1 = instantiate_ezdoctemplatedocument_response(include_optional);

	cJSON* jsonezdoctemplatedocument_response_1 = ezdoctemplatedocument_response_convertToJSON(ezdoctemplatedocument_response_1);
	printf("ezdoctemplatedocument_response :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_response_1));
	ezdoctemplatedocument_response_t* ezdoctemplatedocument_response_2 = ezdoctemplatedocument_response_parseFromJSON(jsonezdoctemplatedocument_response_1);
	cJSON* jsonezdoctemplatedocument_response_2 = ezdoctemplatedocument_response_convertToJSON(ezdoctemplatedocument_response_2);
	printf("repeating ezdoctemplatedocument_response:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_response_2));
}

int main() {
  test_ezdoctemplatedocument_response(1);
  test_ezdoctemplatedocument_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_response_MAIN
#endif // ezdoctemplatedocument_response_TEST
