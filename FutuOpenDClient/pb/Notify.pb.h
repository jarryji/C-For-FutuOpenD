// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Notify.proto

#ifndef PROTOBUF_Notify_2eproto__INCLUDED
#define PROTOBUF_Notify_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "Common.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_Notify_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsGtwEventImpl();
void InitDefaultsGtwEvent();
void InitDefaultsS2CImpl();
void InitDefaultsS2C();
void InitDefaultsResponseImpl();
void InitDefaultsResponse();
inline void InitDefaults() {
  InitDefaultsGtwEvent();
  InitDefaultsS2C();
  InitDefaultsResponse();
}
}  // namespace protobuf_Notify_2eproto
namespace Notify {
class GtwEvent;
class GtwEventDefaultTypeInternal;
extern GtwEventDefaultTypeInternal _GtwEvent_default_instance_;
class Response;
class ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
class S2C;
class S2CDefaultTypeInternal;
extern S2CDefaultTypeInternal _S2C_default_instance_;
}  // namespace Notify
namespace Notify {

enum NotifyType {
  NotifyType_None = 0,
  NotifyType_GtwEvent = 1
};
bool NotifyType_IsValid(int value);
const NotifyType NotifyType_MIN = NotifyType_None;
const NotifyType NotifyType_MAX = NotifyType_GtwEvent;
const int NotifyType_ARRAYSIZE = NotifyType_MAX + 1;

const ::google::protobuf::EnumDescriptor* NotifyType_descriptor();
inline const ::std::string& NotifyType_Name(NotifyType value) {
  return ::google::protobuf::internal::NameOfEnum(
    NotifyType_descriptor(), value);
}
inline bool NotifyType_Parse(
    const ::std::string& name, NotifyType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NotifyType>(
    NotifyType_descriptor(), name, value);
}
enum GtwEventType {
  GtwEventType_None = 0,
  GtwEventType_LocalCfgLoadFailed = 1,
  GtwEventType_APISvrRunFailed = 2,
  GtwEventType_ForceUpdate = 3,
  GtwEventType_LoginFailed = 4,
  GtwEventType_UnAgreeDisclaimer = 5,
  GtwEventType_NetCfgMissing = 6,
  GtwEventType_KickedOut = 7,
  GtwEventType_LoginPwdChanged = 8,
  GtwEventType_BanLogin = 9,
  GtwEventType_NeedPicVerifyCode = 10,
  GtwEventType_NeedPhoneVerifyCode = 11,
  GtwEventType_AppDataNotExist = 12,
  GtwEventType_NessaryDataMissing = 13,
  GtwEventType_TradePwdChanged = 14,
  GtwEventType_EnableDeviceLock = 15
};
bool GtwEventType_IsValid(int value);
const GtwEventType GtwEventType_MIN = GtwEventType_None;
const GtwEventType GtwEventType_MAX = GtwEventType_EnableDeviceLock;
const int GtwEventType_ARRAYSIZE = GtwEventType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GtwEventType_descriptor();
inline const ::std::string& GtwEventType_Name(GtwEventType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GtwEventType_descriptor(), value);
}
inline bool GtwEventType_Parse(
    const ::std::string& name, GtwEventType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GtwEventType>(
    GtwEventType_descriptor(), name, value);
}
// ===================================================================

class GtwEvent : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Notify.GtwEvent) */ {
 public:
  GtwEvent();
  virtual ~GtwEvent();

  GtwEvent(const GtwEvent& from);

  inline GtwEvent& operator=(const GtwEvent& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GtwEvent(GtwEvent&& from) noexcept
    : GtwEvent() {
    *this = ::std::move(from);
  }

  inline GtwEvent& operator=(GtwEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GtwEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GtwEvent* internal_default_instance() {
    return reinterpret_cast<const GtwEvent*>(
               &_GtwEvent_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(GtwEvent* other);
  friend void swap(GtwEvent& a, GtwEvent& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GtwEvent* New() const PROTOBUF_FINAL { return New(NULL); }

  GtwEvent* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const GtwEvent& from);
  void MergeFrom(const GtwEvent& from);
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
  void InternalSwap(GtwEvent* other);
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

  // required string desc = 2;
  bool has_desc() const;
  void clear_desc();
  static const int kDescFieldNumber = 2;
  const ::std::string& desc() const;
  void set_desc(const ::std::string& value);
  #if LANG_CXX11
  void set_desc(::std::string&& value);
  #endif
  void set_desc(const char* value);
  void set_desc(const char* value, size_t size);
  ::std::string* mutable_desc();
  ::std::string* release_desc();
  void set_allocated_desc(::std::string* desc);

  // required int32 eventType = 1;
  bool has_eventtype() const;
  void clear_eventtype();
  static const int kEventTypeFieldNumber = 1;
  ::google::protobuf::int32 eventtype() const;
  void set_eventtype(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Notify.GtwEvent)
 private:
  void set_has_eventtype();
  void clear_has_eventtype();
  void set_has_desc();
  void clear_has_desc();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr desc_;
  ::google::protobuf::int32 eventtype_;
  friend struct ::protobuf_Notify_2eproto::TableStruct;
  friend void ::protobuf_Notify_2eproto::InitDefaultsGtwEventImpl();
};
// -------------------------------------------------------------------

class S2C : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Notify.S2C) */ {
 public:
  S2C();
  virtual ~S2C();

  S2C(const S2C& from);

  inline S2C& operator=(const S2C& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  S2C(S2C&& from) noexcept
    : S2C() {
    *this = ::std::move(from);
  }

  inline S2C& operator=(S2C&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const S2C& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const S2C* internal_default_instance() {
    return reinterpret_cast<const S2C*>(
               &_S2C_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(S2C* other);
  friend void swap(S2C& a, S2C& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline S2C* New() const PROTOBUF_FINAL { return New(NULL); }

  S2C* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const S2C& from);
  void MergeFrom(const S2C& from);
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
  void InternalSwap(S2C* other);
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

  // optional .Notify.GtwEvent event = 2;
  bool has_event() const;
  void clear_event();
  static const int kEventFieldNumber = 2;
  const ::Notify::GtwEvent& event() const;
  ::Notify::GtwEvent* release_event();
  ::Notify::GtwEvent* mutable_event();
  void set_allocated_event(::Notify::GtwEvent* event);

  // required int32 type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Notify.S2C)
 private:
  void set_has_type();
  void clear_has_type();
  void set_has_event();
  void clear_has_event();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::Notify::GtwEvent* event_;
  ::google::protobuf::int32 type_;
  friend struct ::protobuf_Notify_2eproto::TableStruct;
  friend void ::protobuf_Notify_2eproto::InitDefaultsS2CImpl();
};
// -------------------------------------------------------------------

class Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Notify.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const PROTOBUF_FINAL { return New(NULL); }

  Response* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
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
  void InternalSwap(Response* other);
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

  // optional string retMsg = 2;
  bool has_retmsg() const;
  void clear_retmsg();
  static const int kRetMsgFieldNumber = 2;
  const ::std::string& retmsg() const;
  void set_retmsg(const ::std::string& value);
  #if LANG_CXX11
  void set_retmsg(::std::string&& value);
  #endif
  void set_retmsg(const char* value);
  void set_retmsg(const char* value, size_t size);
  ::std::string* mutable_retmsg();
  ::std::string* release_retmsg();
  void set_allocated_retmsg(::std::string* retmsg);

  // optional .Notify.S2C s2c = 4;
  bool has_s2c() const;
  void clear_s2c();
  static const int kS2CFieldNumber = 4;
  const ::Notify::S2C& s2c() const;
  ::Notify::S2C* release_s2c();
  ::Notify::S2C* mutable_s2c();
  void set_allocated_s2c(::Notify::S2C* s2c);

  // optional int32 errCode = 3;
  bool has_errcode() const;
  void clear_errcode();
  static const int kErrCodeFieldNumber = 3;
  ::google::protobuf::int32 errcode() const;
  void set_errcode(::google::protobuf::int32 value);

  // required int32 retType = 1 [default = -400];
  bool has_rettype() const;
  void clear_rettype();
  static const int kRetTypeFieldNumber = 1;
  ::google::protobuf::int32 rettype() const;
  void set_rettype(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Notify.Response)
 private:
  void set_has_rettype();
  void clear_has_rettype();
  void set_has_retmsg();
  void clear_has_retmsg();
  void set_has_errcode();
  void clear_has_errcode();
  void set_has_s2c();
  void clear_has_s2c();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr retmsg_;
  ::Notify::S2C* s2c_;
  ::google::protobuf::int32 errcode_;
  ::google::protobuf::int32 rettype_;
  friend struct ::protobuf_Notify_2eproto::TableStruct;
  friend void ::protobuf_Notify_2eproto::InitDefaultsResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GtwEvent

// required int32 eventType = 1;
inline bool GtwEvent::has_eventtype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GtwEvent::set_has_eventtype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GtwEvent::clear_has_eventtype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GtwEvent::clear_eventtype() {
  eventtype_ = 0;
  clear_has_eventtype();
}
inline ::google::protobuf::int32 GtwEvent::eventtype() const {
  // @@protoc_insertion_point(field_get:Notify.GtwEvent.eventType)
  return eventtype_;
}
inline void GtwEvent::set_eventtype(::google::protobuf::int32 value) {
  set_has_eventtype();
  eventtype_ = value;
  // @@protoc_insertion_point(field_set:Notify.GtwEvent.eventType)
}

// required string desc = 2;
inline bool GtwEvent::has_desc() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GtwEvent::set_has_desc() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GtwEvent::clear_has_desc() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GtwEvent::clear_desc() {
  desc_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_desc();
}
inline const ::std::string& GtwEvent::desc() const {
  // @@protoc_insertion_point(field_get:Notify.GtwEvent.desc)
  return desc_.GetNoArena();
}
inline void GtwEvent::set_desc(const ::std::string& value) {
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Notify.GtwEvent.desc)
}
#if LANG_CXX11
inline void GtwEvent::set_desc(::std::string&& value) {
  set_has_desc();
  desc_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Notify.GtwEvent.desc)
}
#endif
inline void GtwEvent::set_desc(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Notify.GtwEvent.desc)
}
inline void GtwEvent::set_desc(const char* value, size_t size) {
  set_has_desc();
  desc_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Notify.GtwEvent.desc)
}
inline ::std::string* GtwEvent::mutable_desc() {
  set_has_desc();
  // @@protoc_insertion_point(field_mutable:Notify.GtwEvent.desc)
  return desc_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GtwEvent::release_desc() {
  // @@protoc_insertion_point(field_release:Notify.GtwEvent.desc)
  clear_has_desc();
  return desc_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GtwEvent::set_allocated_desc(::std::string* desc) {
  if (desc != NULL) {
    set_has_desc();
  } else {
    clear_has_desc();
  }
  desc_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), desc);
  // @@protoc_insertion_point(field_set_allocated:Notify.GtwEvent.desc)
}

// -------------------------------------------------------------------

// S2C

// required int32 type = 1;
inline bool S2C::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void S2C::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void S2C::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void S2C::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 S2C::type() const {
  // @@protoc_insertion_point(field_get:Notify.S2C.type)
  return type_;
}
inline void S2C::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:Notify.S2C.type)
}

// optional .Notify.GtwEvent event = 2;
inline bool S2C::has_event() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void S2C::set_has_event() {
  _has_bits_[0] |= 0x00000001u;
}
inline void S2C::clear_has_event() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void S2C::clear_event() {
  if (event_ != NULL) event_->Clear();
  clear_has_event();
}
inline const ::Notify::GtwEvent& S2C::event() const {
  const ::Notify::GtwEvent* p = event_;
  // @@protoc_insertion_point(field_get:Notify.S2C.event)
  return p != NULL ? *p : *reinterpret_cast<const ::Notify::GtwEvent*>(
      &::Notify::_GtwEvent_default_instance_);
}
inline ::Notify::GtwEvent* S2C::release_event() {
  // @@protoc_insertion_point(field_release:Notify.S2C.event)
  clear_has_event();
  ::Notify::GtwEvent* temp = event_;
  event_ = NULL;
  return temp;
}
inline ::Notify::GtwEvent* S2C::mutable_event() {
  set_has_event();
  if (event_ == NULL) {
    event_ = new ::Notify::GtwEvent;
  }
  // @@protoc_insertion_point(field_mutable:Notify.S2C.event)
  return event_;
}
inline void S2C::set_allocated_event(::Notify::GtwEvent* event) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete event_;
  }
  if (event) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      event = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, event, submessage_arena);
    }
    set_has_event();
  } else {
    clear_has_event();
  }
  event_ = event;
  // @@protoc_insertion_point(field_set_allocated:Notify.S2C.event)
}

// -------------------------------------------------------------------

// Response

// required int32 retType = 1 [default = -400];
inline bool Response::has_rettype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Response::set_has_rettype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Response::clear_has_rettype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Response::clear_rettype() {
  rettype_ = -400;
  clear_has_rettype();
}
inline ::google::protobuf::int32 Response::rettype() const {
  // @@protoc_insertion_point(field_get:Notify.Response.retType)
  return rettype_;
}
inline void Response::set_rettype(::google::protobuf::int32 value) {
  set_has_rettype();
  rettype_ = value;
  // @@protoc_insertion_point(field_set:Notify.Response.retType)
}

// optional string retMsg = 2;
inline bool Response::has_retmsg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Response::set_has_retmsg() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Response::clear_has_retmsg() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Response::clear_retmsg() {
  retmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_retmsg();
}
inline const ::std::string& Response::retmsg() const {
  // @@protoc_insertion_point(field_get:Notify.Response.retMsg)
  return retmsg_.GetNoArena();
}
inline void Response::set_retmsg(const ::std::string& value) {
  set_has_retmsg();
  retmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Notify.Response.retMsg)
}
#if LANG_CXX11
inline void Response::set_retmsg(::std::string&& value) {
  set_has_retmsg();
  retmsg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Notify.Response.retMsg)
}
#endif
inline void Response::set_retmsg(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_retmsg();
  retmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Notify.Response.retMsg)
}
inline void Response::set_retmsg(const char* value, size_t size) {
  set_has_retmsg();
  retmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Notify.Response.retMsg)
}
inline ::std::string* Response::mutable_retmsg() {
  set_has_retmsg();
  // @@protoc_insertion_point(field_mutable:Notify.Response.retMsg)
  return retmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_retmsg() {
  // @@protoc_insertion_point(field_release:Notify.Response.retMsg)
  clear_has_retmsg();
  return retmsg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_retmsg(::std::string* retmsg) {
  if (retmsg != NULL) {
    set_has_retmsg();
  } else {
    clear_has_retmsg();
  }
  retmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), retmsg);
  // @@protoc_insertion_point(field_set_allocated:Notify.Response.retMsg)
}

// optional int32 errCode = 3;
inline bool Response::has_errcode() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Response::set_has_errcode() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Response::clear_has_errcode() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Response::clear_errcode() {
  errcode_ = 0;
  clear_has_errcode();
}
inline ::google::protobuf::int32 Response::errcode() const {
  // @@protoc_insertion_point(field_get:Notify.Response.errCode)
  return errcode_;
}
inline void Response::set_errcode(::google::protobuf::int32 value) {
  set_has_errcode();
  errcode_ = value;
  // @@protoc_insertion_point(field_set:Notify.Response.errCode)
}

// optional .Notify.S2C s2c = 4;
inline bool Response::has_s2c() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Response::set_has_s2c() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Response::clear_has_s2c() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Response::clear_s2c() {
  if (s2c_ != NULL) s2c_->Clear();
  clear_has_s2c();
}
inline const ::Notify::S2C& Response::s2c() const {
  const ::Notify::S2C* p = s2c_;
  // @@protoc_insertion_point(field_get:Notify.Response.s2c)
  return p != NULL ? *p : *reinterpret_cast<const ::Notify::S2C*>(
      &::Notify::_S2C_default_instance_);
}
inline ::Notify::S2C* Response::release_s2c() {
  // @@protoc_insertion_point(field_release:Notify.Response.s2c)
  clear_has_s2c();
  ::Notify::S2C* temp = s2c_;
  s2c_ = NULL;
  return temp;
}
inline ::Notify::S2C* Response::mutable_s2c() {
  set_has_s2c();
  if (s2c_ == NULL) {
    s2c_ = new ::Notify::S2C;
  }
  // @@protoc_insertion_point(field_mutable:Notify.Response.s2c)
  return s2c_;
}
inline void Response::set_allocated_s2c(::Notify::S2C* s2c) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete s2c_;
  }
  if (s2c) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      s2c = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, s2c, submessage_arena);
    }
    set_has_s2c();
  } else {
    clear_has_s2c();
  }
  s2c_ = s2c;
  // @@protoc_insertion_point(field_set_allocated:Notify.Response.s2c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Notify

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Notify::NotifyType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Notify::NotifyType>() {
  return ::Notify::NotifyType_descriptor();
}
template <> struct is_proto_enum< ::Notify::GtwEventType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Notify::GtwEventType>() {
  return ::Notify::GtwEventType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Notify_2eproto__INCLUDED
