pipeline {
    /* insert Declarative Pipeline here */
    /* https://jenkins.io/doc/book/pipeline/syntax/ */
    agent any
    triggers {
        pollSCM('*/30 * * * *')
    }
    parameters {
        string(name: 'PERSON', defaultValue: 'Mr Jenkins', description: 'Who should I say hello to?')
    }
    environment {
        HELLO = "WORLD"
    }
    stages {
        stage('Clean Environment') {
            when {
                branch 'production'
            }
            steps {
                sh 'make clean'
            }
        }
        stage('Setup Environment') {
            steps {
                sh 'make -j2 env'
            }
        }
        stage('Build Blink') {
            steps {
                sh 'make Blink'
            }
        }
        stage('Build HAL') {
            steps {
                sh 'make HAL'
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
