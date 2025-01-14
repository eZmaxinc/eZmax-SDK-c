#ifndef ezdoctemplatedocument_autocomplete_element_response_TEST
#define ezdoctemplatedocument_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezdoctemplatedocument_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezdoctemplatedocument_autocomplete_element_response.h"
ezdoctemplatedocument_autocomplete_element_response_t* instantiate_ezdoctemplatedocument_autocomplete_element_response(int include_optional);



ezdoctemplatedocument_autocomplete_element_response_t* instantiate_ezdoctemplatedocument_autocomplete_element_response(int include_optional) {
  ezdoctemplatedocument_autocomplete_element_response_t* ezdoctemplatedocument_autocomplete_element_response = NULL;
  if (include_optional) {
    ezdoctemplatedocument_autocomplete_element_response = ezdoctemplatedocument_autocomplete_element_response_create(
      95,
      "Standard Contract",
      true
    );
  } else {
    ezdoctemplatedocument_autocomplete_element_response = ezdoctemplatedocument_autocomplete_element_response_create(
      95,
      "Standard Contract",
      true
    );
  }

  return ezdoctemplatedocument_autocomplete_element_response;
}


#ifdef ezdoctemplatedocument_autocomplete_element_response_MAIN

void test_ezdoctemplatedocument_autocomplete_element_response(int include_optional) {
    ezdoctemplatedocument_autocomplete_element_response_t* ezdoctemplatedocument_autocomplete_element_response_1 = instantiate_ezdoctemplatedocument_autocomplete_element_response(include_optional);

	cJSON* jsonezdoctemplatedocument_autocomplete_element_response_1 = ezdoctemplatedocument_autocomplete_element_response_convertToJSON(ezdoctemplatedocument_autocomplete_element_response_1);
	printf("ezdoctemplatedocument_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezdoctemplatedocument_autocomplete_element_response_1));
	ezdoctemplatedocument_autocomplete_element_response_t* ezdoctemplatedocument_autocomplete_element_response_2 = ezdoctemplatedocument_autocomplete_element_response_parseFromJSON(jsonezdoctemplatedocument_autocomplete_element_response_1);
	cJSON* jsonezdoctemplatedocument_autocomplete_element_response_2 = ezdoctemplatedocument_autocomplete_element_response_convertToJSON(ezdoctemplatedocument_autocomplete_element_response_2);
	printf("repeating ezdoctemplatedocument_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezdoctemplatedocument_autocomplete_element_response_2));
}

int main() {
  test_ezdoctemplatedocument_autocomplete_element_response(1);
  test_ezdoctemplatedocument_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezdoctemplatedocument_autocomplete_element_response_MAIN
#endif // ezdoctemplatedocument_autocomplete_element_response_TEST
