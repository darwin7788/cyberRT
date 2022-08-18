// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/topology_change.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2ftopology_5fchange_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2ftopology_5fchange_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "cyber/proto/role_attributes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cyber_2fproto_2ftopology_5fchange_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cyber_2fproto_2ftopology_5fchange_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto;
namespace apollo {
namespace cyber {
namespace proto {
class ChangeMsg;
struct ChangeMsgDefaultTypeInternal;
extern ChangeMsgDefaultTypeInternal _ChangeMsg_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::cyber::proto::ChangeMsg* Arena::CreateMaybeMessage<::apollo::cyber::proto::ChangeMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace cyber {
namespace proto {

enum ChangeType : int {
  CHANGE_NODE = 1,
  CHANGE_CHANNEL = 2,
  CHANGE_SERVICE = 3,
  CHANGE_PARTICIPANT = 4
};
bool ChangeType_IsValid(int value);
constexpr ChangeType ChangeType_MIN = CHANGE_NODE;
constexpr ChangeType ChangeType_MAX = CHANGE_PARTICIPANT;
constexpr int ChangeType_ARRAYSIZE = ChangeType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChangeType_descriptor();
template<typename T>
inline const std::string& ChangeType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ChangeType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ChangeType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ChangeType_descriptor(), enum_t_value);
}
inline bool ChangeType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChangeType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChangeType>(
    ChangeType_descriptor(), name, value);
}
enum OperateType : int {
  OPT_JOIN = 1,
  OPT_LEAVE = 2
};
bool OperateType_IsValid(int value);
constexpr OperateType OperateType_MIN = OPT_JOIN;
constexpr OperateType OperateType_MAX = OPT_LEAVE;
constexpr int OperateType_ARRAYSIZE = OperateType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OperateType_descriptor();
template<typename T>
inline const std::string& OperateType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, OperateType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function OperateType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    OperateType_descriptor(), enum_t_value);
}
inline bool OperateType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, OperateType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<OperateType>(
    OperateType_descriptor(), name, value);
}
enum RoleType : int {
  ROLE_NODE = 1,
  ROLE_WRITER = 2,
  ROLE_READER = 3,
  ROLE_SERVER = 4,
  ROLE_CLIENT = 5,
  ROLE_PARTICIPANT = 6
};
bool RoleType_IsValid(int value);
constexpr RoleType RoleType_MIN = ROLE_NODE;
constexpr RoleType RoleType_MAX = ROLE_PARTICIPANT;
constexpr int RoleType_ARRAYSIZE = RoleType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RoleType_descriptor();
template<typename T>
inline const std::string& RoleType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, RoleType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function RoleType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    RoleType_descriptor(), enum_t_value);
}
inline bool RoleType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, RoleType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<RoleType>(
    RoleType_descriptor(), name, value);
}
// ===================================================================

class ChangeMsg final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.cyber.proto.ChangeMsg) */ {
 public:
  inline ChangeMsg() : ChangeMsg(nullptr) {}
  ~ChangeMsg() override;
  explicit PROTOBUF_CONSTEXPR ChangeMsg(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChangeMsg(const ChangeMsg& from);
  ChangeMsg(ChangeMsg&& from) noexcept
    : ChangeMsg() {
    *this = ::std::move(from);
  }

  inline ChangeMsg& operator=(const ChangeMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChangeMsg& operator=(ChangeMsg&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ChangeMsg& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChangeMsg* internal_default_instance() {
    return reinterpret_cast<const ChangeMsg*>(
               &_ChangeMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChangeMsg& a, ChangeMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(ChangeMsg* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ChangeMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChangeMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChangeMsg>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ChangeMsg& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ChangeMsg& from) {
    ChangeMsg::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ChangeMsg* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.cyber.proto.ChangeMsg";
  }
  protected:
  explicit ChangeMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRoleAttrFieldNumber = 5,
    kTimestampFieldNumber = 1,
    kRoleTypeFieldNumber = 4,
    kChangeTypeFieldNumber = 2,
    kOperateTypeFieldNumber = 3,
  };
  // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
  bool has_role_attr() const;
  private:
  bool _internal_has_role_attr() const;
  public:
  void clear_role_attr();
  const ::apollo::cyber::proto::RoleAttributes& role_attr() const;
  PROTOBUF_NODISCARD ::apollo::cyber::proto::RoleAttributes* release_role_attr();
  ::apollo::cyber::proto::RoleAttributes* mutable_role_attr();
  void set_allocated_role_attr(::apollo::cyber::proto::RoleAttributes* role_attr);
  private:
  const ::apollo::cyber::proto::RoleAttributes& _internal_role_attr() const;
  ::apollo::cyber::proto::RoleAttributes* _internal_mutable_role_attr();
  public:
  void unsafe_arena_set_allocated_role_attr(
      ::apollo::cyber::proto::RoleAttributes* role_attr);
  ::apollo::cyber::proto::RoleAttributes* unsafe_arena_release_role_attr();

  // optional uint64 timestamp = 1;
  bool has_timestamp() const;
  private:
  bool _internal_has_timestamp() const;
  public:
  void clear_timestamp();
  uint64_t timestamp() const;
  void set_timestamp(uint64_t value);
  private:
  uint64_t _internal_timestamp() const;
  void _internal_set_timestamp(uint64_t value);
  public:

  // optional .apollo.cyber.proto.RoleType role_type = 4;
  bool has_role_type() const;
  private:
  bool _internal_has_role_type() const;
  public:
  void clear_role_type();
  ::apollo::cyber::proto::RoleType role_type() const;
  void set_role_type(::apollo::cyber::proto::RoleType value);
  private:
  ::apollo::cyber::proto::RoleType _internal_role_type() const;
  void _internal_set_role_type(::apollo::cyber::proto::RoleType value);
  public:

  // optional .apollo.cyber.proto.ChangeType change_type = 2;
  bool has_change_type() const;
  private:
  bool _internal_has_change_type() const;
  public:
  void clear_change_type();
  ::apollo::cyber::proto::ChangeType change_type() const;
  void set_change_type(::apollo::cyber::proto::ChangeType value);
  private:
  ::apollo::cyber::proto::ChangeType _internal_change_type() const;
  void _internal_set_change_type(::apollo::cyber::proto::ChangeType value);
  public:

  // optional .apollo.cyber.proto.OperateType operate_type = 3;
  bool has_operate_type() const;
  private:
  bool _internal_has_operate_type() const;
  public:
  void clear_operate_type();
  ::apollo::cyber::proto::OperateType operate_type() const;
  void set_operate_type(::apollo::cyber::proto::OperateType value);
  private:
  ::apollo::cyber::proto::OperateType _internal_operate_type() const;
  void _internal_set_operate_type(::apollo::cyber::proto::OperateType value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.cyber.proto.ChangeMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::apollo::cyber::proto::RoleAttributes* role_attr_;
    uint64_t timestamp_;
    int role_type_;
    int change_type_;
    int operate_type_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_cyber_2fproto_2ftopology_5fchange_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChangeMsg

// optional uint64 timestamp = 1;
inline bool ChangeMsg::_internal_has_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ChangeMsg::has_timestamp() const {
  return _internal_has_timestamp();
}
inline void ChangeMsg::clear_timestamp() {
  _impl_.timestamp_ = uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline uint64_t ChangeMsg::_internal_timestamp() const {
  return _impl_.timestamp_;
}
inline uint64_t ChangeMsg::timestamp() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.timestamp)
  return _internal_timestamp();
}
inline void ChangeMsg::_internal_set_timestamp(uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.timestamp_ = value;
}
inline void ChangeMsg::set_timestamp(uint64_t value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.timestamp)
}

// optional .apollo.cyber.proto.ChangeType change_type = 2;
inline bool ChangeMsg::_internal_has_change_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ChangeMsg::has_change_type() const {
  return _internal_has_change_type();
}
inline void ChangeMsg::clear_change_type() {
  _impl_.change_type_ = 1;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::apollo::cyber::proto::ChangeType ChangeMsg::_internal_change_type() const {
  return static_cast< ::apollo::cyber::proto::ChangeType >(_impl_.change_type_);
}
inline ::apollo::cyber::proto::ChangeType ChangeMsg::change_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.change_type)
  return _internal_change_type();
}
inline void ChangeMsg::_internal_set_change_type(::apollo::cyber::proto::ChangeType value) {
  assert(::apollo::cyber::proto::ChangeType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.change_type_ = value;
}
inline void ChangeMsg::set_change_type(::apollo::cyber::proto::ChangeType value) {
  _internal_set_change_type(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.change_type)
}

// optional .apollo.cyber.proto.OperateType operate_type = 3;
inline bool ChangeMsg::_internal_has_operate_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool ChangeMsg::has_operate_type() const {
  return _internal_has_operate_type();
}
inline void ChangeMsg::clear_operate_type() {
  _impl_.operate_type_ = 1;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::apollo::cyber::proto::OperateType ChangeMsg::_internal_operate_type() const {
  return static_cast< ::apollo::cyber::proto::OperateType >(_impl_.operate_type_);
}
inline ::apollo::cyber::proto::OperateType ChangeMsg::operate_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.operate_type)
  return _internal_operate_type();
}
inline void ChangeMsg::_internal_set_operate_type(::apollo::cyber::proto::OperateType value) {
  assert(::apollo::cyber::proto::OperateType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.operate_type_ = value;
}
inline void ChangeMsg::set_operate_type(::apollo::cyber::proto::OperateType value) {
  _internal_set_operate_type(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.operate_type)
}

// optional .apollo.cyber.proto.RoleType role_type = 4;
inline bool ChangeMsg::_internal_has_role_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ChangeMsg::has_role_type() const {
  return _internal_has_role_type();
}
inline void ChangeMsg::clear_role_type() {
  _impl_.role_type_ = 1;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::apollo::cyber::proto::RoleType ChangeMsg::_internal_role_type() const {
  return static_cast< ::apollo::cyber::proto::RoleType >(_impl_.role_type_);
}
inline ::apollo::cyber::proto::RoleType ChangeMsg::role_type() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.role_type)
  return _internal_role_type();
}
inline void ChangeMsg::_internal_set_role_type(::apollo::cyber::proto::RoleType value) {
  assert(::apollo::cyber::proto::RoleType_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.role_type_ = value;
}
inline void ChangeMsg::set_role_type(::apollo::cyber::proto::RoleType value) {
  _internal_set_role_type(value);
  // @@protoc_insertion_point(field_set:apollo.cyber.proto.ChangeMsg.role_type)
}

// optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
inline bool ChangeMsg::_internal_has_role_attr() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.role_attr_ != nullptr);
  return value;
}
inline bool ChangeMsg::has_role_attr() const {
  return _internal_has_role_attr();
}
inline const ::apollo::cyber::proto::RoleAttributes& ChangeMsg::_internal_role_attr() const {
  const ::apollo::cyber::proto::RoleAttributes* p = _impl_.role_attr_;
  return p != nullptr ? *p : reinterpret_cast<const ::apollo::cyber::proto::RoleAttributes&>(
      ::apollo::cyber::proto::_RoleAttributes_default_instance_);
}
inline const ::apollo::cyber::proto::RoleAttributes& ChangeMsg::role_attr() const {
  // @@protoc_insertion_point(field_get:apollo.cyber.proto.ChangeMsg.role_attr)
  return _internal_role_attr();
}
inline void ChangeMsg::unsafe_arena_set_allocated_role_attr(
    ::apollo::cyber::proto::RoleAttributes* role_attr) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.role_attr_);
  }
  _impl_.role_attr_ = role_attr;
  if (role_attr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:apollo.cyber.proto.ChangeMsg.role_attr)
}
inline ::apollo::cyber::proto::RoleAttributes* ChangeMsg::release_role_attr() {
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::apollo::cyber::proto::RoleAttributes* temp = _impl_.role_attr_;
  _impl_.role_attr_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::apollo::cyber::proto::RoleAttributes* ChangeMsg::unsafe_arena_release_role_attr() {
  // @@protoc_insertion_point(field_release:apollo.cyber.proto.ChangeMsg.role_attr)
  _impl_._has_bits_[0] &= ~0x00000001u;
  ::apollo::cyber::proto::RoleAttributes* temp = _impl_.role_attr_;
  _impl_.role_attr_ = nullptr;
  return temp;
}
inline ::apollo::cyber::proto::RoleAttributes* ChangeMsg::_internal_mutable_role_attr() {
  _impl_._has_bits_[0] |= 0x00000001u;
  if (_impl_.role_attr_ == nullptr) {
    auto* p = CreateMaybeMessage<::apollo::cyber::proto::RoleAttributes>(GetArenaForAllocation());
    _impl_.role_attr_ = p;
  }
  return _impl_.role_attr_;
}
inline ::apollo::cyber::proto::RoleAttributes* ChangeMsg::mutable_role_attr() {
  ::apollo::cyber::proto::RoleAttributes* _msg = _internal_mutable_role_attr();
  // @@protoc_insertion_point(field_mutable:apollo.cyber.proto.ChangeMsg.role_attr)
  return _msg;
}
inline void ChangeMsg::set_allocated_role_attr(::apollo::cyber::proto::RoleAttributes* role_attr) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.role_attr_);
  }
  if (role_attr) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(role_attr));
    if (message_arena != submessage_arena) {
      role_attr = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, role_attr, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.role_attr_ = role_attr;
  // @@protoc_insertion_point(field_set_allocated:apollo.cyber.proto.ChangeMsg.role_attr)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cyber
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::cyber::proto::ChangeType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::ChangeType>() {
  return ::apollo::cyber::proto::ChangeType_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::OperateType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::OperateType>() {
  return ::apollo::cyber::proto::OperateType_descriptor();
}
template <> struct is_proto_enum< ::apollo::cyber::proto::RoleType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::cyber::proto::RoleType>() {
  return ::apollo::cyber::proto::RoleType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cyber_2fproto_2ftopology_5fchange_2eproto
