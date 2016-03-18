
(cl:in-package :asdf)

(defsystem "navigation-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "systemparameter" :depends-on ("_package_systemparameter"))
    (:file "_package_systemparameter" :depends-on ("_package"))
  ))