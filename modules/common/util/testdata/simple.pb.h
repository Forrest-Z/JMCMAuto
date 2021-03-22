// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/util/testdata/simple.proto

#ifndef PROTOBUF_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto__INCLUDED
#define PROTOBUF_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace common {
namespace util {
namespace test {
class SimpleMessage;
class SimpleMessageDefaultTypeInternal;
extern SimpleMessageDefaultTypeInternal _SimpleMessage_default_instance_;
class SimpleRepeatedMessage;
class SimpleRepeatedMessageDefaultTypeInternal;
extern SimpleRepeatedMessageDefaultTypeInternal _SimpleRepeatedMessage_default_instance_;
}  // namespace test
}  // namespace util
}  // namespace common
}  // namespace jmc_auto

namespace jmc_auto {
namespace common {
namespace util {
namespace test {

namespace protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto

// ===================================================================

class SimpleMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.common.util.test.SimpleMessage) */ {
 public:
  SimpleMessage();
  virtual ~SimpleMessage();

  SimpleMessage(const SimpleMessage& from);

  inline SimpleMessage& operator=(const SimpleMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SimpleMessage& default_instance();

  static inline const SimpleMessage* internal_default_instance() {
    return reinterpret_cast<const SimpleMessage*>(
               &_SimpleMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(SimpleMessage* other);

  // implements Message ----------------------------------------------

  inline SimpleMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  SimpleMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SimpleMessage& from);
  void MergeFrom(const SimpleMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SimpleMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string text = 2;
  bool has_text() const;
  void clear_text();
  static const int kTextFieldNumber = 2;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // optional int32 integer = 1;
  bool has_integer() const;
  void clear_integer();
  static const int kIntegerFieldNumber = 1;
  ::google::protobuf::int32 integer() const;
  void set_integer(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:jmc_auto.common.util.test.SimpleMessage)
 private:
  void set_has_integer();
  void clear_has_integer();
  void set_has_text();
  void clear_has_text();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  ::google::protobuf::int32 integer_;
  friend struct protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SimpleRepeatedMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.common.util.test.SimpleRepeatedMessage) */ {
 public:
  SimpleRepeatedMessage();
  virtual ~SimpleRepeatedMessage();

  SimpleRepeatedMessage(const SimpleRepeatedMessage& from);

  inline SimpleRepeatedMessage& operator=(const SimpleRepeatedMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SimpleRepeatedMessage& default_instance();

  static inline const SimpleRepeatedMessage* internal_default_instance() {
    return reinterpret_cast<const SimpleRepeatedMessage*>(
               &_SimpleRepeatedMessage_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(SimpleRepeatedMessage* other);

  // implements Message ----------------------------------------------

  inline SimpleRepeatedMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  SimpleRepeatedMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const SimpleRepeatedMessage& from);
  void MergeFrom(const SimpleRepeatedMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(SimpleRepeatedMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .jmc_auto.common.util.test.SimpleMessage message = 1;
  int message_size() const;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::jmc_auto::common::util::test::SimpleMessage& message(int index) const;
  ::jmc_auto::common::util::test::SimpleMessage* mutable_message(int index);
  ::jmc_auto::common::util::test::SimpleMessage* add_message();
  ::google::protobuf::RepeatedPtrField< ::jmc_auto::common::util::test::SimpleMessage >*
      mutable_message();
  const ::google::protobuf::RepeatedPtrField< ::jmc_auto::common::util::test::SimpleMessage >&
      message() const;

  // @@protoc_insertion_point(class_scope:jmc_auto.common.util.test.SimpleRepeatedMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::jmc_auto::common::util::test::SimpleMessage > message_;
  friend struct protobuf_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SimpleMessage

// optional int32 integer = 1;
inline bool SimpleMessage::has_integer() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SimpleMessage::set_has_integer() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SimpleMessage::clear_has_integer() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SimpleMessage::clear_integer() {
  integer_ = 0;
  clear_has_integer();
}
inline ::google::protobuf::int32 SimpleMessage::integer() const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.util.test.SimpleMessage.integer)
  return integer_;
}
inline void SimpleMessage::set_integer(::google::protobuf::int32 value) {
  set_has_integer();
  integer_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.common.util.test.SimpleMessage.integer)
}

// optional string text = 2;
inline bool SimpleMessage::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SimpleMessage::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SimpleMessage::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SimpleMessage::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_text();
}
inline const ::std::string& SimpleMessage::text() const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.util.test.SimpleMessage.text)
  return text_.GetNoArena();
}
inline void SimpleMessage::set_text(const ::std::string& value) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.common.util.test.SimpleMessage.text)
}
#if LANG_CXX11
inline void SimpleMessage::set_text(::std::string&& value) {
  set_has_text();
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.common.util.test.SimpleMessage.text)
}
#endif
inline void SimpleMessage::set_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.common.util.test.SimpleMessage.text)
}
inline void SimpleMessage::set_text(const char* value, size_t size) {
  set_has_text();
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.common.util.test.SimpleMessage.text)
}
inline ::std::string* SimpleMessage::mutable_text() {
  set_has_text();
  // @@protoc_insertion_point(field_mutable:jmc_auto.common.util.test.SimpleMessage.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SimpleMessage::release_text() {
  // @@protoc_insertion_point(field_release:jmc_auto.common.util.test.SimpleMessage.text)
  clear_has_text();
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SimpleMessage::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    set_has_text();
  } else {
    clear_has_text();
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.common.util.test.SimpleMessage.text)
}

// -------------------------------------------------------------------

// SimpleRepeatedMessage

// repeated .jmc_auto.common.util.test.SimpleMessage message = 1;
inline int SimpleRepeatedMessage::message_size() const {
  return message_.size();
}
inline void SimpleRepeatedMessage::clear_message() {
  message_.Clear();
}
inline const ::jmc_auto::common::util::test::SimpleMessage& SimpleRepeatedMessage::message(int index) const {
  // @@protoc_insertion_point(field_get:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_.Get(index);
}
inline ::jmc_auto::common::util::test::SimpleMessage* SimpleRepeatedMessage::mutable_message(int index) {
  // @@protoc_insertion_point(field_mutable:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_.Mutable(index);
}
inline ::jmc_auto::common::util::test::SimpleMessage* SimpleRepeatedMessage::add_message() {
  // @@protoc_insertion_point(field_add:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::jmc_auto::common::util::test::SimpleMessage >*
SimpleRepeatedMessage::mutable_message() {
  // @@protoc_insertion_point(field_mutable_list:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return &message_;
}
inline const ::google::protobuf::RepeatedPtrField< ::jmc_auto::common::util::test::SimpleMessage >&
SimpleRepeatedMessage::message() const {
  // @@protoc_insertion_point(field_list:jmc_auto.common.util.test.SimpleRepeatedMessage.message)
  return message_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace test
}  // namespace util
}  // namespace common
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fcommon_2futil_2ftestdata_2fsimple_2eproto__INCLUDED
