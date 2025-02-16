#ifndef FW_FIXED_LENGTH_STRING_TYPE_HPP
#define FW_FIXED_LENGTH_STRING_TYPE_HPP

#include <Fw/Types/BasicTypes.hpp>
#include <Fw/Types/StringType.hpp>
#include <Fw/Cfg/SerIds.hpp>

namespace Fw {

    class FixedLengthString : public Fw::StringBase {
        public:

            enum {
                SERIALIZED_TYPE_ID = FW_TYPEID_FIXED_LENGTH_STRING, //!< typeid for string type
                STRING_SIZE = FW_FIXED_LENGTH_STRING_SIZE, //!< Storage for string
                SERIALIZED_SIZE = STRING_SIZE + sizeof(FwBuffSizeType) //!< Serialized size is size of buffer + size field
            };

            FixedLengthString(const char* src); //!< char* source constructor
            FixedLengthString(const StringBase& src); //!< other string constructor
            FixedLengthString(const FixedLengthString& src); //!< FixedLengthString string constructor
            FixedLengthString(void); //!< default constructor
            FixedLengthString& operator=(const FixedLengthString& other); //!< assignment operator
            FixedLengthString& operator=(const StringBase& other); //!< other string assignment operator
            FixedLengthString& operator=(const char* other); //!< char* assignment operator
            ~FixedLengthString(void); //!< destructor

            const char* toChar(void) const; //!< gets char buffer
            NATIVE_UINT_TYPE getCapacity(void) const ; //!< return buffer size

        private:

            char m_buf[STRING_SIZE]; //!< storage for string data
    };
}

#endif
