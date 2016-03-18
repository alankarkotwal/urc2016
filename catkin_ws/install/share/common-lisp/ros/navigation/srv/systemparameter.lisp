; Auto-generated. Do not edit!


(cl:in-package navigation-srv)


;//! \htmlinclude systemparameter-request.msg.html

(cl:defclass <systemparameter-request> (roslisp-msg-protocol:ros-message)
  ((k1
    :reader k1
    :initarg :k1
    :type cl:float
    :initform 0.0)
   (k2
    :reader k2
    :initarg :k2
    :type cl:float
    :initform 0.0)
   (k3
    :reader k3
    :initarg :k3
    :type cl:float
    :initform 0.0)
   (k4
    :reader k4
    :initarg :k4
    :type cl:float
    :initform 0.0))
)

(cl:defclass systemparameter-request (<systemparameter-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <systemparameter-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'systemparameter-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name navigation-srv:<systemparameter-request> is deprecated: use navigation-srv:systemparameter-request instead.")))

(cl:ensure-generic-function 'k1-val :lambda-list '(m))
(cl:defmethod k1-val ((m <systemparameter-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader navigation-srv:k1-val is deprecated.  Use navigation-srv:k1 instead.")
  (k1 m))

(cl:ensure-generic-function 'k2-val :lambda-list '(m))
(cl:defmethod k2-val ((m <systemparameter-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader navigation-srv:k2-val is deprecated.  Use navigation-srv:k2 instead.")
  (k2 m))

(cl:ensure-generic-function 'k3-val :lambda-list '(m))
(cl:defmethod k3-val ((m <systemparameter-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader navigation-srv:k3-val is deprecated.  Use navigation-srv:k3 instead.")
  (k3 m))

(cl:ensure-generic-function 'k4-val :lambda-list '(m))
(cl:defmethod k4-val ((m <systemparameter-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader navigation-srv:k4-val is deprecated.  Use navigation-srv:k4 instead.")
  (k4 m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <systemparameter-request>) ostream)
  "Serializes a message object of type '<systemparameter-request>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'k1))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'k2))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'k3))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'k4))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <systemparameter-request>) istream)
  "Deserializes a message object of type '<systemparameter-request>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'k1) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'k2) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'k3) (roslisp-utils:decode-double-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'k4) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<systemparameter-request>)))
  "Returns string type for a service object of type '<systemparameter-request>"
  "navigation/systemparameterRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'systemparameter-request)))
  "Returns string type for a service object of type 'systemparameter-request"
  "navigation/systemparameterRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<systemparameter-request>)))
  "Returns md5sum for a message object of type '<systemparameter-request>"
  "684c937ff30737cca1b0e49f2bc137f9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'systemparameter-request)))
  "Returns md5sum for a message object of type 'systemparameter-request"
  "684c937ff30737cca1b0e49f2bc137f9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<systemparameter-request>)))
  "Returns full string definition for message of type '<systemparameter-request>"
  (cl:format cl:nil "float64 k1~%float64 k2~%float64 k3~%float64 k4~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'systemparameter-request)))
  "Returns full string definition for message of type 'systemparameter-request"
  (cl:format cl:nil "float64 k1~%float64 k2~%float64 k3~%float64 k4~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <systemparameter-request>))
  (cl:+ 0
     8
     8
     8
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <systemparameter-request>))
  "Converts a ROS message object to a list"
  (cl:list 'systemparameter-request
    (cl:cons ':k1 (k1 msg))
    (cl:cons ':k2 (k2 msg))
    (cl:cons ':k3 (k3 msg))
    (cl:cons ':k4 (k4 msg))
))
;//! \htmlinclude systemparameter-response.msg.html

(cl:defclass <systemparameter-response> (roslisp-msg-protocol:ros-message)
  ((kp
    :reader kp
    :initarg :kp
    :type (cl:vector cl:float)
   :initform (cl:make-array 4 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass systemparameter-response (<systemparameter-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <systemparameter-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'systemparameter-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name navigation-srv:<systemparameter-response> is deprecated: use navigation-srv:systemparameter-response instead.")))

(cl:ensure-generic-function 'kp-val :lambda-list '(m))
(cl:defmethod kp-val ((m <systemparameter-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader navigation-srv:kp-val is deprecated.  Use navigation-srv:kp instead.")
  (kp m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <systemparameter-response>) ostream)
  "Serializes a message object of type '<systemparameter-response>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'kp))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <systemparameter-response>) istream)
  "Deserializes a message object of type '<systemparameter-response>"
  (cl:setf (cl:slot-value msg 'kp) (cl:make-array 4))
  (cl:let ((vals (cl:slot-value msg 'kp)))
    (cl:dotimes (i 4)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<systemparameter-response>)))
  "Returns string type for a service object of type '<systemparameter-response>"
  "navigation/systemparameterResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'systemparameter-response)))
  "Returns string type for a service object of type 'systemparameter-response"
  "navigation/systemparameterResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<systemparameter-response>)))
  "Returns md5sum for a message object of type '<systemparameter-response>"
  "684c937ff30737cca1b0e49f2bc137f9")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'systemparameter-response)))
  "Returns md5sum for a message object of type 'systemparameter-response"
  "684c937ff30737cca1b0e49f2bc137f9")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<systemparameter-response>)))
  "Returns full string definition for message of type '<systemparameter-response>"
  (cl:format cl:nil "float64[4] kp~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'systemparameter-response)))
  "Returns full string definition for message of type 'systemparameter-response"
  (cl:format cl:nil "float64[4] kp~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <systemparameter-response>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'kp) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <systemparameter-response>))
  "Converts a ROS message object to a list"
  (cl:list 'systemparameter-response
    (cl:cons ':kp (kp msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'systemparameter)))
  'systemparameter-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'systemparameter)))
  'systemparameter-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'systemparameter)))
  "Returns string type for a service object of type '<systemparameter>"
  "navigation/systemparameter")