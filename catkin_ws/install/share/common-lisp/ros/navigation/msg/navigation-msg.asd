
(cl:in-package :asdf)

(defsystem "navigation-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "rover_mobility_arduino" :depends-on ("_package_rover_mobility_arduino"))
    (:file "_package_rover_mobility_arduino" :depends-on ("_package"))
  ))