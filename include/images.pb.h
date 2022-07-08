// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: images.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_images_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_images_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_images_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_images_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_images_2eproto;
namespace imagebuf {
class channel;
struct channelDefaultTypeInternal;
extern channelDefaultTypeInternal _channel_default_instance_;
}  // namespace imagebuf
PROTOBUF_NAMESPACE_OPEN
template<> ::imagebuf::channel* Arena::CreateMaybeMessage<::imagebuf::channel>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace imagebuf {

// ===================================================================

class channel final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:imagebuf.channel) */ {
 public:
  inline channel() : channel(nullptr) {}
  ~channel() override;
  explicit PROTOBUF_CONSTEXPR channel(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  channel(const channel& from);
  channel(channel&& from) noexcept
    : channel() {
    *this = ::std::move(from);
  }

  inline channel& operator=(const channel& from) {
    CopyFrom(from);
    return *this;
  }
  inline channel& operator=(channel&& from) noexcept {
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

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const channel& default_instance() {
    return *internal_default_instance();
  }
  static inline const channel* internal_default_instance() {
    return reinterpret_cast<const channel*>(
               &_channel_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(channel& a, channel& b) {
    a.Swap(&b);
  }
  inline void Swap(channel* other) {
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
  void UnsafeArenaSwap(channel* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  channel* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<channel>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const channel& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const channel& from) {
    channel::MergeImpl(*this, from);
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
  void InternalSwap(channel* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "imagebuf.channel";
  }
  protected:
  explicit channel(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kImageFieldNumber = 3,
    kIdFieldNumber = 1,
  };
  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // bytes image = 3;
  void clear_image();
  const std::string& image() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_image(ArgT0&& arg0, ArgT... args);
  std::string* mutable_image();
  PROTOBUF_NODISCARD std::string* release_image();
  void set_allocated_image(std::string* image);
  private:
  const std::string& _internal_image() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_image(const std::string& value);
  std::string* _internal_mutable_image();
  public:

  // int64 id = 1;
  void clear_id();
  int64_t id() const;
  void set_id(int64_t value);
  private:
  int64_t _internal_id() const;
  void _internal_set_id(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:imagebuf.channel)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr image_;
    int64_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_images_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// channel

// int64 id = 1;
inline void channel::clear_id() {
  _impl_.id_ = int64_t{0};
}
inline int64_t channel::_internal_id() const {
  return _impl_.id_;
}
inline int64_t channel::id() const {
  // @@protoc_insertion_point(field_get:imagebuf.channel.id)
  return _internal_id();
}
inline void channel::_internal_set_id(int64_t value) {
  
  _impl_.id_ = value;
}
inline void channel::set_id(int64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:imagebuf.channel.id)
}

// string name = 2;
inline void channel::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& channel::name() const {
  // @@protoc_insertion_point(field_get:imagebuf.channel.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void channel::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:imagebuf.channel.name)
}
inline std::string* channel::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:imagebuf.channel.name)
  return _s;
}
inline const std::string& channel::_internal_name() const {
  return _impl_.name_.Get();
}
inline void channel::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* channel::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* channel::release_name() {
  // @@protoc_insertion_point(field_release:imagebuf.channel.name)
  return _impl_.name_.Release();
}
inline void channel::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:imagebuf.channel.name)
}

// bytes image = 3;
inline void channel::clear_image() {
  _impl_.image_.ClearToEmpty();
}
inline const std::string& channel::image() const {
  // @@protoc_insertion_point(field_get:imagebuf.channel.image)
  return _internal_image();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void channel::set_image(ArgT0&& arg0, ArgT... args) {
 
 _impl_.image_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:imagebuf.channel.image)
}
inline std::string* channel::mutable_image() {
  std::string* _s = _internal_mutable_image();
  // @@protoc_insertion_point(field_mutable:imagebuf.channel.image)
  return _s;
}
inline const std::string& channel::_internal_image() const {
  return _impl_.image_.Get();
}
inline void channel::_internal_set_image(const std::string& value) {
  
  _impl_.image_.Set(value, GetArenaForAllocation());
}
inline std::string* channel::_internal_mutable_image() {
  
  return _impl_.image_.Mutable(GetArenaForAllocation());
}
inline std::string* channel::release_image() {
  // @@protoc_insertion_point(field_release:imagebuf.channel.image)
  return _impl_.image_.Release();
}
inline void channel::set_allocated_image(std::string* image) {
  if (image != nullptr) {
    
  } else {
    
  }
  _impl_.image_.SetAllocated(image, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.image_.IsDefault()) {
    _impl_.image_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:imagebuf.channel.image)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace imagebuf

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_images_2eproto
