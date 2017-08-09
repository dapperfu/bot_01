pipeline {
    /* insert Declarative Pipeline here */
    /* https://jenkins.io/doc/book/pipeline/syntax/ */
    agent { any }
    stages {
        stage('Setup Environment') {
            steps {
                sh 'make -j2 env'
            }
        }
    }
    post {
        always {
            echo "Always"
        }
        changed {
            echo "Changed"
        }
        failure {
            echo "Failure"
        }
        success {
            echo "Success"
        }
        unstable {
            echo "Unstable"
        }
        aborted {
            echo "Aborted"
        }
    }
}
